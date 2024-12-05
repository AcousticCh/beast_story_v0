/* beast story v.0 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// CREATE CONTIDIONAL CHOOSING STORY BASED ON RACE
// START STORIES




typedef struct
{
	char name[50];
	int age;
	char race[50];
	char battle_class[50];
} Character;


char player_name[50];
int player_age;
char player_race[50];
char player_battle_class[50];

int race_choice_int;


// if new characters are added index size must change accordingly
char race_list[8][20] = {
		"human",		// 1
		"mermaid",	        // 2
		"dragonoid",		// 3
		"elf",			// 4
		"nature spirit",	// 5
		"dwarf",		// 6
		"werewolf",		// 7
		"vampire"		// 8
		};


char battle_class_list[9][20] = {
		"warrior",		// 1
		"knight",		// 2
		"paladin",		// 3
		"rouge",		// 4
		"assassin",		// 5
		"archer",		// 6
		"wizard",		// 7
		"sorcerer",		// 8
		"necromancer"		// 9
		};




void getPlayerName()
{
	printf("What is your name:\t");
        scanf("%s", &player_name);

	system("clear");
};


void getPlayerAge()
{
	printf("\nSelect your age:\t");
        scanf("%d", &player_age);

	system("clear");
};


int getPlayerRace()
{
	int race_list_size = sizeof(race_list) / sizeof(race_list[0]);

        printf("\n\nPlease select a race (1 - %d):\n", race_list_size);

        //race list printf for loop
        for(int i = 0; i < race_list_size; i++)
        {
                int readable_index = i + 1;
                printf("%d. %s\n", readable_index, race_list[i]);
        };//end for loop

        // new Line for readability
        printf("\n");

        int race_choice;
        scanf("%d", &race_choice);
        --race_choice;
        strcpy(player_race, race_list[race_choice]);

	system("clear");

	return race_choice;
};


void getPlayerBattleClass()
{
	int battle_class_list_size = sizeof(battle_class_list) / sizeof(battle_class_list[0]);

        printf("\n\nNow select your class (1 - %d):\n", battle_class_list_size);

        //battle class list printf for loop
        for(int i = 0; i < battle_class_list_size; i++)
        {
                int readable_index = i + 1;
                printf("%d. %s\n", readable_index, battle_class_list[i]);
        }; //end for loop

        // new line for readability
        printf("\n");

        int battle_class_choice;
        scanf("%d", &battle_class_choice);
        --battle_class_choice;
        strcpy(player_battle_class, battle_class_list[battle_class_choice]);

	system("clear");
};


void updateCharacterInfo(Character *pChar, char name[50], int age, char race[50], char battle_class[50])
{
	strcpy(pChar->name, name);
	pChar->age = age;
        strcpy(pChar->race, race);
        strcpy(pChar->battle_class, battle_class);
};


int main()
{
	system("clear");

	// name selection
	getPlayerName();


	// introduction
	printf("\n\nWelcome %s you are entering a new world \nwhere fantasy becomes reality and uncertainty is all around.\n", player_name);
	printf("The world is divided by race and you will be pushed into this distress, \nalthough you are not trapped.\n");
	printf("Freedom comes at a cost and you will be given a choice.\n");
	printf("I may have your name, but who you really are will be seen in times ahead.\n");



	//age selection
	getPlayerAge();



	//race selection
	race_choice_int = getPlayerRace();


	// class selection
	getPlayerBattleClass();


	// new line for readability
        printf("\n");

	// declare player character
	Character playerCharacter;

	updateCharacterInfo(&playerCharacter, player_name, player_age, player_race, player_battle_class);

	int continue_editing = 1;
	while(continue_editing)
	{
		printf("Confirm character data:\n");
		printf("1. name:\t%s\n", playerCharacter.name);
		printf("2. age:\t\t%d\n", playerCharacter.age);
		printf("3. race:\t%s\n", playerCharacter.race);
		printf("4. class:\t%s\n", playerCharacter.battle_class);

		int edit_data_input;
		printf("\nSelect 1-4 to edit character info.\nSelect 0 to start game.\n\n");
		scanf("%d", &edit_data_input);

		// new line for readability
        	printf("\n");

		switch(edit_data_input)
		{
			case 0:
				//start game
				continue_editing = 0;
				break;

			case 1:
				//edit name
				getPlayerName();
				break;

			case 2:
				//edit age
				getPlayerAge();
				break;

			case 3:
				//edit race
				race_choice_int = getPlayerRace();
				break;

			case 4:
				//edit battle class
				getPlayerBattleClass();
				break;
		}; // end of switch

		updateCharacterInfo(&playerCharacter, player_name, player_age, player_race, player_battle_class);

	}; // end of while loop for editing

	//------------------------ intro to story -----------------------------------|
	switch(race_choice_int) {

		case 0:
			// function for race story here
			printf("Human");
			break;
		case 1:
                        // function for race story here
			printf("Mermaid");
                        break;
		case 2:
                        // function for race story here
			printf("Dragonoid");
                        break;
		case 3:
                        // function for race story here
			printf("Elf");
                        break;
		case 4:
                        // function for race story here
			printf("Nature Spirit");
                        break;
		case 5:
                        // function for race story here
			printf("Dwarf");
                        break;
		case 6:
                        // function for race story here
			printf("Werewolf");
                        break;
		case 7:
                        // function for race story here
			printf("Vampire");
                        break;

	}; // end of switch


	printf("Current end");

}// end of main

