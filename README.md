# Proposal
## ENGG1340 Project - Chemistry Crisis
***
### Group members
---
- Olano, James Daniel Cubillas - 3035777975
- Yan, Wing Lam - 3035779519

### Game description
--- 
Chemistry Crisis is a role-playing game, in which players can learn chemistry in a much more interactive and fun way. In 2060, Chemistria was invaded by an unknown force that wreak havoc upon the planet. The player is summoned by a wizard and is crowned as the "Chosen One". The player has to survive and defeat the monsters with his/her chemistry knowledge. Let’s go save the world of Chemistria!

### Game rules
---
-The player is tasked to defeat all 4 of the monsters on Earth.

-Using their chemistry knowledge in a turn-based battle system to fight the monsters.

-The health bar of each monster will be deducted depending on the answer.

-The player can heal after each battle at a town

-After defeating the final boss monster, the total score will determine the ending the player gets.

### Features & Coding requirements
---
-Save/Load Game - Use of File I/O in order to save the name/level/status of the user. Information related to the player (ex. Current health, inventory, score, etc) will be saved in that file. Once the player opens up the game at a later time, the game will check if there exists a save-file, if one exists, then the game will input the file into the program to load the current progress of the player. 

-Randomized journey - Each playthrough of the game will have a unique town path where players may encounter monsters in a different order in each gameplay. This can be done by using rand()/srand() and with the use of arrays in order to store the monster order.

-Town Hubs - Since there are 3 towns in the game where players can either save, rest or fight, separating the codes in different files will be appropriate ( This can apply to game features such as battle systems as well ). This can help with debugging within levels.

-Allocation of array elements for Town Path - Use of dynamic memory management allows for a quicker way of loading a previous game save.

-Health bar - The player and the monster both have a full health bar, it will change throughout each level and stored as a data structure for storing game status. When the player’s health bar reaches 0, the player will be sent back to the previous hub visited. It will be refilled in before each battle. When the monster’s health bar reaches 0, the game moves on. 

### Notes
---
-The game is tested on the Academy11 Server*
-Please go in fullscreen mode before executing ./main in order to fully appreciate the ASCII art
