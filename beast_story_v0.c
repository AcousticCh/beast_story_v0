/* beast story v.0 */

#include <stdio.h>

struct Character
{
	char name[50];
	int age;
	char race[50];
	char battle_class[50];
};


char player_name[50];
int player_age;
char player_race[50];
char player_battle_class[50];


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


int main()
{
	// name selection
	printf("What is your name:\t");
	scanf("%s", &player_name);

	// introduction
	printf("\n\nWelcome %s you are entering a new world \nwhere fantasy becomes reality and uncertainty is all around.\n", player_name);
	printf("The world is divided by race and you will be pushed into this distress, \nalthough you are not trapped.\n");
	printf("Freedom comes at a cost and you will be given a choice.\n");
	printf("I may have your name, but who you really are will be seen in times ahead.\n");

	//age selection
	printf("Select your age:\t");
	scanf("%d", &player_age);

	//race selection
	int race_list_size = sizeof(race_list) / sizeof(race_list[0]);

	printf("\n\nPlease select a race (1 - %d):\n", race_list_size);

	//race list printf loop
	for(int i = 0; i < race_list_size; i++)
	{
		int readable_index = i + 1;
		printf("%d. %s\n", readable_index, race_list[i]);
	};//end for loop

	int race_choice;
	scanf("\n%d", &race_choice);
	race_choice = race_choice - 1;
	//player_race = race _list[race_choice];

	// class selection
	printf("\n\nNow select your class:\n");

}
