#pragma once //the pragma prevents the compiler from including this file twice

//these tell the compiler that the function is outside of this header file and they have their own signature so the main.cpp can call them.
float rectangleArea(float length1, float length2);
float rectanglePerimeter(float length1, float length2);
float circleArea(float radius);
float CircleCircumference(float radius);
float pythagoras(float a, float b);

void startScreen();
void mainMenu();
void endFunction();