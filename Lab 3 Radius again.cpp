// Lab 3 Radius again.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "functions.h" //this links back to the functions.h file so the main can link things like the rectanglePerimeter.
#include <cmath>
int main()

{
	//length, width and radius are variables.
	using namespace std;
	float length;
	float width;
	float radius;
		//Rectangle input

	cout << "--- Shape Calculator---" << endl;
	cout << "Enter the length of the rectangle";
	cin >> length;
	cout << "Enter width of the rectangle";
	cin >> width;
	//Circle input

	cout << "Enter the radius of the circle";
	cin >> radius;

	//variables for side A and B
	float sideA, sideB;

	//pythagoras input 
	cout << "Enter side A";
	cin >> sideA;
	cout << "Enter side B";
	cin >> sideB;

	//This calls the pythagoras function from the Source.cpp
	cout << "Hypotenuse" << pythagoras(sideA, sideB) << endl;

	//Outcome from the user calling the math functions and variables.
	cout << "\n---Results---" << endl;
	//Variables get transfered into this function
	cout << "Rectangle Area" << rectangleArea(length, width) << endl;
	cout << "Rectangle  Perimeter" << rectanglePerimeter(length, width) << endl;
	cout << "Circle Area" << circleArea(radius) << endl;
	cout << "Circle Circumference" << CircleCircumference(radius) << endl;

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
