#include <iostream>
#include <string>



using namespace std;

void clearscreen()
{
    cout << "\033[2J\033[1;1H";
}

void monsters()
{
cout<<"	    _.------.                        .----.__			"<<endl;
cout<<"           /         \\_.       ._           /---.__  \\		"<<endl;
cout<<"          |  O    O   |\\\\___  //|          /       `\\ |		"<<endl;
cout<<"          |  .vvvvv.  | )   `(/ |         | o     o  \\|		"<<endl;
cout<<"          /  |     |  |/      \\ |  /|   ./| .vvvvv.  |\\		"<<endl;
cout<<"         /   `^^^^^'  / _   _  `|_ ||  / /| |     |  | \\		"<<endl;
cout<<"       ./  /|         | O)  O   ) \\|| //' | `^vvvv'  |/\\\\	"<<endl;
cout<<"      /   / |         \\        /  | | ~   \\          |  \\\\	"<<endl;
cout<<"      \\  /  |        / \\ Y   /'   | \\     |          |   ~	"<<endl;
cout<<"       `'   |  _     |  `._/' |   |  \\     7        /		"<<endl;
cout<<"         _.-'-' `-'-'|  |`-._/   /    \\ _ /    .    |		"<<endl;
cout<<"    __.-'            \\  \\   .   / \\_.  \\ -|_/\\/ `--.|_		"<<endl;
cout<<" --'                  \\  \\ |   /    |  |              `-		"<<endl;

}
void world()
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
void wizard()
{
    cout<<"                       .      "<<endl;
    cout<<"             /^\\     .        "<<endl;
    cout<<"        /\\   'V'              "<<endl;
    cout<<"       /__\\   I      O  o     "<<endl;
    cout<<"      //..\\\\  I     .         "<<endl;
    cout<<"      \\].`[/  I               "<<endl;
    cout<<"      /l\\/j\\  (]    .  O      "<<endl;
    cout<<"     /. ~~ ,\\/I          .    "<<endl;
    cout<<"     \\\\L__j^\\/I       o       "<<endl;
    cout<<"      \\/--v}  I     o   .     "<<endl;
    cout<<"      |    |  I   _________   "<<endl;
    cout<<"      |    |  I c(`       ')o "<<endl;
    cout<<"      |    l  I   \\.     ,/   "<<endl;
    cout<<"    _/j  L l\\_!  _//^---^\\\\_  "<<endl;
}
void beginning()
{
	srand(time(NULL));

    string name;
    wizard();
    cout<<"Welcome Chosen One, you have been summoned by the gods of Chemistria\nto save our planet."<<endl;
    cin.ignore();

    clearscreen();
    wizard();
    cout<<"Chosen one, what is thy name?"<<endl;
    cout<<"Name: ";
    getline(cin,name);
	if (name.empty()){
		clearscreen();
	    wizard();
		cout<<"Don't be shy, tell me your name Chosen One."<<endl;
		while (name.empty()){
			cout<<"Name: ";
			getline(cin,name);

		}
	}
    clearscreen();
    wizard();
    cout<<"So your name is "<<name<<"."<<" Very well, I shall explain to you what has happened"<<endl;
	cin.ignore();
	clearscreen();
	world();
	cout<<"Earth was perfect 5000 years ago, before mankind populated the planet."<<endl;
	cout<<"Back then, the air, the trees, the wilderness were all clean and peaceful."<<endl;
	cin.ignore();
	clearscreen();
	cout<<"until..."<<endl;
	cin.ignore();
	clearscreen();
	monsters();
	cout<<"The monster nation attacked.. Soil erroded. Buildings deteriorated. Everything. Destroyed.";
	cin.ignore();
	clearscreen();
	wizard();
	cout<<"With your strong chemistry skills, I'm sure you can save our planet.";
	cin.ignore();
	clearscreen();
	cout<<endl;
	cout<<"Are you ready? (Y/N)"<<endl;
	char yn;
	cin >> yn;
	if (yn == 'Y'){
		cout<<"Good luck "<<name<<endl;
	}
	else{
		cout<<"That is unfortunate"<<endl;
		cin.ignore();
		clearscreen();
		cout<<"YOU DON'T HAVE A CHOICE :)"<<endl;
	}


}
