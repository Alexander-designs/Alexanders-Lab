// TimesTable repeat Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    using namespace std;
//checks if the player wants to continue and uses 'char' vairiable to store 'y' and 'n'.
    char playAgain = 'y'; 
    int playerChoice;
    //The while loop checks if the user has input a n or N if the user hasnt typed n the code runs again.
    while (playAgain != 'n' && playAgain != 'N')
    {
        cout << "\n-- - Times Table Generator ---" << endl;
        cout << "Please input a number";
        cin >> playerChoice;

        cout << "\nDisplaying the" << playerChoice << "times table up to 12\n";
        //The loop starts at 1 and ends at 12
        for (int i = 1; i <= 12; i++)
        {
            //calculating the users input.
            cout << playerChoice << " x " << i << " = " << (playerChoice * i) << endl;
        }
        //Asks the user if they want to continue
        cout << "\nWould you like to try another number? y/n";
        cin >> playAgain;
    }
    //This only happnes when(playAgain != 'n' is false
    cout << "\n Exciting Times Table console. Goodbye.\n";
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
