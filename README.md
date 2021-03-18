# Proposal
## ENGG1340 Project - Chemistry Crisis
***
### Group members
---
- Olano, James Daniel Cubillas - 3035777975
- Yan, Wing Lam - 3035779519

### Game description
--- Chemistry Crisis is a role-playing game, in which players can learn chemistry in a much more interactive and fun way. In 2060, the Earth was seriously polluted. Animals are mutated into monsters because of all kinds of toxic chemicals. The player has to survive and defeat the monsters with his/her chemistry knowledge. Let’s go save your chemistry and the world! 

### Game rules
---
### Features & Coding requirements
---
Save/Load Game - Use of File I/O in order to save the name/level/status of the user. Information related to the player (ex. Current health, inventory, score, etc) will be saved in that file. Once the player opens up the game at a later time, the game will check if there exists a save-file, if one exists, then the game will input the file into the program to load the current progress of the player. 

Randomized enemy encounter - Each playthrough of the game will have a randomized order of monsters. This can be done by using rand()/srand() and with the use of arrays in order to store the monster order.

Randomized gears - After each monster is defeated, the player will be given a gear. Using rand()/srand() to randomly give a gear and store it in the players inventory with an array.

Inventory system - Gears can be stored in the players inventory through the use of arrays, as they allow for multiple elements to be stored. Since multiple gears can be collected, an array is appropriate to be used for an inventory feature.

Stages - Since there are 3 stages in the game, separating the codes in different files will be appropriate ( This can apply to game features such as battle systems as well ). This can help with debugging within levels.

Quick load status - Use of dynamic memory management allows for a quicker way of loading a previous game save.

Health bar - The player and the monster both have a full health bar, it will change throughout each level and stored as a data structure for storing game status. When the player’s health bar reaches 0, the player has to replay the level. It will be refilled in before each battle. When the monster’s health bar reaches 0, the game moves on. The players final health bar of every battle will be stored and added up to generate the final score.

