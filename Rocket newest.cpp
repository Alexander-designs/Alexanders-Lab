// Rocket newest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
using namespace std;

int main()
{
	cout << "===Game start===" << endl;
	cout << "Missile attack " << endl;
	cout << "\n=====================\n\n";

	int playerChoice = 0;
	float pi = 3.142f;

	while (playerChoice != 4)
		// when the user enters 4 it ends the programme
	{
		cout << "\n Option Menu" << endl;
		cout << "Please Select the program to run\n";
		cout << "1:Circle Calculator\n";
		cout << "2. Missile Range Calculator\n";
		cout << "3. Attack Damage Calculator\n";
		cout << "4. Exit Programme\n";
		cout << " : ";
		// Calculation options

		if (!(cin >> playerChoice)) 
			//checks if the user input is valid
		{
			cout << "Invalid input. Please enter a number (1-4)." << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			// clears unnecessary input 
			continue;
		}
		switch (playerChoice)
		{
		case 1:
		{
			float radius, diameter, circumference, area;
			cout << "\n\n ==================== \nCircle Calc\n";


			cout << "Enter the Radius of the Circle: ";
			//Location for the equations for the different results
			cin >> radius; // cin places numbersr with the vairable 

			diameter = radius * 2;
			circumference = 2 * pi * radius;
			area = pi * (radius * radius);

			cout << "\n--- Results ---\n";
			cout << "Radius:" << radius << endl;
			cout << "Diameter:" << diameter << endl;
			cout << "Circumference:" << circumference << endl;
			cout << "Area: " << area << endl;
			// Looks at the users decision and Selects the user output
			break;
		}
		case 2:
		{
			cout << "Missile Range Calculator selected,\n";
			break;
		}
		case 3:
		{
			cout << "Attack Damage Calculator Selected.\n";
			break;
		}
		case 4:
		{
			cout << "Exiting the program. Goodbye!\n";
			break;
		}
		default:
		{
			cout << "\n\nInvalid selection.\n";
			break;
		}
		}
	}


	return 0;
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
