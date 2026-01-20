// Combat Loop lab 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    using namespace std;

    cout << "===========\n\n";
    cout << "\n\n Simple Combat Loop\n\n";

    //seed random number generator and that it changes each time the user plays.
    srand(static_cast<unsigned int>(time(0)));
    // Variables 
    bool gameOver = false;  //controls when to stop the game 
    float pcHP = 100;   //players health
    float npcHP = 100;  //npc health
    float pcAttack = 50;   //users attack
    float pcAttackModifier = 50;
    float npcAttackModifier;
    int playerChoice;
    //game runs as long as the gameOver remains false
    while (gameOver == false)
    {
        cout << "\n\n =================\n\n";
        cout << "please Select an Option\n";
        cout << "\n 1: Attack";
        cout << "\n 2: Defend";
        cout << "\n 3: Evade";
        cout << "\n\n choice: ";
        std::cin >> playerChoice;
        // Users selection options of Attack Defend and evade and that the computer checks if the user has input 1,2 and 3.
        if (playerChoice == 1)
        {
            cout << "\n 1: Attack Selected \n"; //Attack
            pcAttackModifier = rand() % 5 + 1;
        }
        else if (playerChoice == 2)
        {
            cout << "\n 2: Defend Selected \n"; //Defend
            pcAttackModifier = rand() % 3 + 1;
        }
        else if (playerChoice == 3)
        {
            cout << "\n Evade Selected \n"; //Evade
            pcAttackModifier = rand() % 4 + 1;
        }
        else
        {
            cout << "\n Not a Valid Option \n";
            npcAttackModifier = 100;
        }
        npcAttackModifier = rand() % 4 + 1;
        {
            cout << "\n\n";
            //displays damage calculations
            cout << "\n PC Attack = " << pcAttack * 1 / pcAttackModifier;
            cout << "\n NPC Attack = " << pcAttack * 1 / npcAttackModifier;
            //Updates the Health 
            npcHP -= pcAttack * 1 / pcAttackModifier;
            pcHP -= pcAttack * 1 / npcAttackModifier;

            cout << "\n\n";
            cout << "\n New PC Health : " << pcHP;
            cout << "\n New NPC Health : " << npcHP;

            cout << "\n\n=================================================\n\n";

            if (pcHP <= 0)
                cout << "\n You Lost";
            else
                cout << "\n You Won";


        }
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
