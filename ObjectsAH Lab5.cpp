// ObjectsAH Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Objects.h"
#include <iostream>

int main()
{
	// small Circle with its class
	Circle smallCircle; 
	smallCircle.radius = 5.0f;
	//large Circle still uses the same class as the small circle but a different set of data
	Circle largeCircle;
	largeCircle.radius = 12.5f;

	//add square formulas
	Square mySquare;
	mySquare.sideLength = 10.0f;
	//displaying  the outcome
	
	std::cout << "---Small Circle---" << std::endl;
	std::cout << "Area" << smallCircle.getArea() << std::endl;
	std::cout << "Circumference" << smallCircle.getCircumference() << std::endl;

	std::cout << "\n--- Large Circle ---" << std::endl;
	std::cout << "Area" << largeCircle.getArea() << std::endl;
	std::cout << "Circumference" << largeCircle.getCircumference() << std::endl;

	std::cout << "\n---Square ---" << std::endl;
	std::cout << "Area" << mySquare.getArea() << std::endl;
	std::cout << "perimeter" << mySquare.getPerimeter() << std::endl;

	std::cin.get(); 
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
