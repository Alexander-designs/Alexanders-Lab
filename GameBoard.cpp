#include "Arrays.h"
#include <iostream>
#include <ctime>

using namespace std;


	//variables for the board.
	const int boardWidth = 20; 
	const int boardHeight = 15;
	char gameBoard[boardHeight][boardWidth]; //shows the board.
	bool gameOver = false; //controls the games loop.

	void createBoard()
	{
		//loops that goes to every cell.
		for (int h = 0; h < boardHeight; h++)
		{
			for (int w = 0; w < boardWidth; w++)
			{
				//Checks the games boundary
				if (h == 0 || h == boardHeight - 1) gameBoard[h][w] = '=';
				else if (w == 0 || w == boardWidth - 1) gameBoard[h][w] = 'I';
				//playable area for the user to input the amount of characters.
				else gameBoard[h][w] = '.';
			}
		}
	}
	void populateBoard()
	{
		cout << "\n Populating Board with 5 different objects";
		cout << "\nHow many objects would you like to add?";
		int amount;
		cin >> amount; //stores the users amount of characters.

		char objects[5] = { '*', '£', '&', '#' ,'$' }; //different characters for the user to get randomly.
		

		for (int i = 0; i < amount; i++)
		{
			//calculates random coordinates for the characters to go inside the border
			//int h = (rand() % (boardHeight - 2)) + 1 prevents the characters going outside the board.
			int h = (rand() % (boardHeight - 2)) + 1;
			int w = (rand() % (boardWidth - 2)) + 1;
			int randomCharIndex = rand() % 5;
			gameBoard[h][w] = objects[randomCharIndex];
		}
	}
	void displayBoard()
	{
		system("cls"); // Cleans the console
		cout << "\n ===== Game Board ===== \n";
		for (int h = 0; h < boardHeight; h++)
		{
			for (int w = 0; w < boardWidth; w++)
			{
				//makes sure the console looks square
				cout << " " << gameBoard[h][w];
			}
			//end of the row
			cout << "\n";
		}
		cout << "====================\n";
	}
	void waitForKeyPress()
	{
		cout << "\n Press and key then enter to continue";
		int dummy; //takes the variable temporarily to input into the board
		cin >> dummy;

		cin.clear(); 
		cin.ignore(100, '\n');
	}
	void playAgain()
	{
		char choice;
		cout << "\n Play again y/n?";
			cin >> choice;
		if (choice == 'n' || choice == 'N')gameOver = true;
	}
	void exitScreen()
	{
		system("cls");
		cout << "\n===============";
		cout << "\n Game Over";
			cout << "\n===============";
			system("pause"); //holds the final screen.
	}
	void arrayGameBoard()
	{
		srand(static_cast<unsigned int>(time(NULL))); // makes the characters spawn in.
		createBoard();
		
		while (!gameOver)
		{
			displayBoard(); //shows the board
			waitForKeyPress(); //waits so the user can see the characters
			populateBoard();  //user adds characters
			displayBoard(); //shows board with the new characters
			playAgain(); // will ask the user if they want to play again
			if(!gameOver)
			{

			createBoard(); //resets the board for the next go if the user hasnt quit.
		}
		}
		exitScreen();
	}
