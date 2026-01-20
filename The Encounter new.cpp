// The Encounter new.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
int main()
{
	using namespace std;
	cout << "====Game Start====" << endl;
	cout << "Case / switch Example \nAlexander Hilton 2025" << endl;
	cout << "============\n\n" << endl;

	std::string CharacterName = "Gandalf"; // creates a variable what stores character text like gandelf and staff.
	std::string weapon = "Staff"; 
	float damage = 20.f; // these are float numbers and they're whole numbers with a decimal.
	float coolDown = 5.0f;
	float attack;
	int playerSelection; //gives the user to select from the menu with only whole numbers.
	//Character slection UI
	cout << "\n\n Character select \n";
	cout << "\n Please Select a Character";
	cout << "\n 1: Warrior";
	cout << "\n 2: Paladin";
	cout << "\n 3: Mage";

	cin >> playerSelection; //cin >> matches the number with the player for example 1 Would give a warrior made Steve.

	switch (playerSelection)

	{
	case 1:
		CharacterName = " Steve";
		weapon = "Axe";
		damage = 20;
		coolDown = 5;
		break;

	case 2:
		CharacterName = "Tirion";
		weapon = "Sword";
		damage = 20;
		coolDown = 5;
		break;

	case 3:
		CharacterName = "Gandalf";
		weapon = "Staff";
		damage = 30;
		coolDown = 2;
		break;
// if the user selects a number outside of 4 it would be invalid and the system would make the user plage the mage.
	default:
		cout << "\n Invalid slection , defaults to mage." << endl;
		break;
	}

	{
		cout << "\n\========= The encounter ============ \n\n\n"; //This is the UI after picking the character.
		cout << CharacterName;
		cout << "\n" << CharacterName << " roams the land for adventure \n";
		cout << "\n" << CharacterName << " uses their" << weapon  << "\n";
		cout << "eventually" << CharacterName << " sets off a trap is now in a fight against voldemort ";

		attack = damage * 6 * 1 / coolDown;
		cout << "\n\n" << CharacterName << "attack with" << weapon << endl;
		cout << "your attack power totals" << attack << endl;


		if (attack > 24)
		{
			cout << "\n Horrah you won \n"; //end screen UI if won.
		}
		else
		{
			cout << "\n You Lost \n"; //end screen UI if the player lost.
		}


		cout << "\n\n \n=========== Game Over ===============\n\n\n";
		return 0;
	}




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
