// ACKS Helper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include "CharacterGenerator.h"

using namespace std;


void newDungeon (void);
void newStronghold (void);
void newEncounter (void);
void newCharacterClass (void);
void conductTrade (void);






int main()
{
	//This function governs the menu and menu navigation


	int menuChoice;  //This variable holds the choice the user selects
	bool exit = false; //This variable will exit the while loop and end the program

	//initiate srand so that psuedo random numbers can be obtained.
	std::srand(time(0));

	while (exit != true)
	{
		std::cout << "===========================================\n";
		std::cout << "==  *     *     *      ******  *     *  ==\n";
		std::cout << "==  * * * *    * *        *    **    *  ==\n";
		std::cout << "==  *  *  *   *****       *    *  *  *  ==\n";
		std::cout << "==  *     *  *     *      *    *    **  ==\n";
		std::cout << "==  *     * *       *  ******  *     *  ==\n";
		std::cout << "==========================================\n";

		std::cout << "==========================================\n";
		std::cout << "==  *     *  *******  *     *  *     *  ==\n";
		std::cout << "==  * * * *  *        * *   *  *     *  ==\n";
		std::cout << "==  *  *  *  ****     *  *  *  *     *  ==\n";
		std::cout << "==  *     *  *        *   * *  *     *  ==\n";
		std::cout << "==  *     *  *******  *     *  *******  ==\n";
		std::cout << "==========================================\n\n\n\n";

		std::cout << "Please select an option from the choices below.\n\n";

		std::cout << "1. Spawn a New Character\n";
		std::cout << "2. Generate a New Dungeon (WIP)\n";
		std::cout << "3. Construct a New Stronghold (WIP)\n";
		std::cout << "4. Roll a New Random Encounter (WIP)\n";
		std::cout << "5. Generate New Class (WIP)\n";
		std::cout << "6. Conduct Trade (WIP)\n";
		std::cout << "7. Exit\n\n";

		std::cin >> menuChoice;

		if (menuChoice == 1)
		{
			newCharacter();
		}

		else if (menuChoice == 2)
		{
			newDungeon();
		}

		else if (menuChoice == 3)
		{
			newStronghold();
		}

		else if (menuChoice == 4)
		{
			newEncounter();
		}

		else if (menuChoice == 5)
		{
			newCharacterClass();
		}

		else if (menuChoice == 6)
		{
			conductTrade();
		}

		else if (menuChoice == 7)
		{
			std::cout << "Goodbye\n";
			exit = true;
		}
	}
}


	void newDungeon(void)
	{
		std::cout << "New Dungeon\n";
	}

	void newStronghold(void)
	{
		std::cout << "New Stronghold\n";
	}

	void newEncounter(void)
	{
		std::cout << "New Encounter\n";
	}

	void newCharacterClass(void)
	{
		std::cout << "New Character\n";
	}

	void conductTrade(void)
	{
		std::cout << "New Trade\n";
	}

