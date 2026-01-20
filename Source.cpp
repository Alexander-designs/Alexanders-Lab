#include <cmath>
#include "functions.h"
#include <ostream>
#include <iostream>
//takes the float radius as a parameter and returns with the calculated area.
float circleArea(float radius)
{
	const float pi = 3.142; //constant value of pi.
	return pow(radius, 2) * pi; //returns the value of pi * r^2
}
float CircleCircumference(float radius)
{
	return 2 * 3.142 * radius;
}

float rectangleArea(float length1, float length2)
{
	return (length1 * length2);
}
float  rectanglePerimeter(float length1, float length2)
{
	return (2 * length1 + 2 * length2);
}
float pythagoras(float a, float b)
{
	return sqrt(pow(a, 2) + pow(b, 2));
}
//The voids responsibility is to print rather than create the value.
void startScreen()
{
	using namespace std;
	cout << "===============" << endl;
	cout << "Shape Calculator" << endl;
	cout << "===============" << endl;
}
void mainMenu()
{
	using namespace std;
	cout << "\n --- Main Menu ---" <<  endl;
	cout << "1. Run Shape Calculator" << endl;
	cout << "2.Exit" << endl;
}
void endFunction()
{
	using namespace std;
	cout << "\n===========" << endl;
	cout << "Exiting Console." << endl;
	cout << "===========" << endl;
}