#include <iostream>
#include "player.h"
#include "clearscreen.h"
#include "ending.h"

using namespace std;

void earth()
{
cout<<".    .    *  .   .  .   .  *     .  .        . .   .     .  *   .     .  .   .	"<<endl;
cout<<"   *  .    .    *  .     .         .    * .     .  *  .    .   .   *   . .    .	"<<endl;
cout<<". *      .   .    .  .     .  *      .      .        .     .-o--.   .    *  .	"<<endl;
cout<<" .  .        .     .     .      .    .     *      *   .   :O o O :      .     .	"<<endl;
cout<<"____   *   .    .      .   .           .  .   .      .    : O. Oo;    .   .		"<<endl;
cout<<" `. ````.---...___      .      *    .      .       .   * . `-.O-'  .     * . .	"<<endl;
cout<<"   \\_    ;   \\`.-'```--..__.       .    .      * .     .       .     .        .	"<<endl;
cout<<"   ,'_,-' _,-'             ``--._    .   *   .   .  .       .   *   .     .  .	"<<endl;
cout<<"   -'  ,-'                       `-._ *     .       .   *  .           .    .	"<<endl;
cout<<"    ,-'            _,-._            ,`-. .    .   .     .      .     *    .   .	"<<endl;
cout<<"    '--.     _ _.._`-.  `-._        |   `_   .      *  .    .   .     .  .    .	"<<endl;
cout<<"        ;  ,' ' _  `._`._   `.      `,-''  `-.     .    .     .    .      .  .	"<<endl;
cout<<"     ,-'   \\    `;.   `. ;`   `._  _/\\___     `.       .    *     .    . *		"<<endl;
cout<<"     \\      \\ ,  `-'    )        `':_  ; \\      `. . *     .        .    .    *	"<<endl;
cout<<"      \\    _; `       ,;               __;        `. .           .   .     . .	"<<endl;
cout<<"       '-.;        __,  `   _,-'-.--'''  \\-:        `.   *   .    .  .   *   .	"<<endl;
cout<<"          )`-..---'   `---''              \\ `.        . .   .  .       . .  .	"<<endl;
cout<<"        .'                                 `. `.       `  .    *   .      .  .	"<<endl;
cout<<"       /                                     `. `.      ` *          .       .	"<<endl;
cout<<"      /                                        `. `.     '      .   .     *		"<<endl;
cout<<"     /                                           `. `.   _'.  .       .  .    .	"<<endl;
cout<<"    |                                              `._\\-'  '     .        .  .	"<<endl;
cout<<"    |                                                 `.__, \\  *     .   . *. .	"<<endl;
cout<<"    |                                                      \\ \\.    .         .	"<<endl;
cout<<"    |                                                       \\ \\ .     *       *	"<<endl;
}

void revivedcreator()
{
    cout<<"                       .      "<<endl;
    cout<<"             /^\\     .        "<<endl;
    cout<<"        /\\   'V'              "<<endl;
    cout<<"       /__\\   I      O  o     "<<endl;
    cout<<"      //..\\\\  I     .         "<<endl;
    cout<<"      \\]^`[/  I               "<<endl;
    cout<<"      /l\\/j\\  (]    .  O      "<<endl;
    cout<<"     /. ~~ ,\\/I          .    "<<endl;
    cout<<"     \\\\L__j^\\/I       o       "<<endl;
    cout<<"      \\/--v}  I     o   .     "<<endl;
    cout<<"      |    |  I   _________   "<<endl;
    cout<<"      |    |  I c(`       ')o "<<endl;
    cout<<"      |    l  I   \\.     ,/   "<<endl;
    cout<<"    _/j  L l\\_!  _//^---^\\\\_  "<<endl;
}

void good()
{
	earth();
	cout<<"Humanity has returned back to it's tranquil state, the monsters have left the planet."<<endl;
	cout<<"You are crowned as the new king of Chemistria due to your acheivement of defeating the evil."<<endl;
	cout<<"Total score: "<<player.score<<endl;

}

void bad()
{
	revivedcreator();
	cout<<"YOU FOOL! I HAVE REVIVED USING THE POWER OF ALL THE MONSTERS, THE WORLD SHALL BE DESTROYED NOW!!!"<<endl;
	cout<<"True despair has been brought upon the planet, there is no way out. Try again, next game..."<<endl;
	cout<<"Total score: "<<player.score<<endl;
}

void ending()				//checks to see if the player gets the good or bad ending
{
	clearscreen();
	if (player.score >= 375)
		good();
	else
		bad();

	cin.ignore();
	cout<<"Thank you for playing!"<<endl;
	cin.ignore();
	clearscreen();
	exit(0);

}
