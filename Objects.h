#pragma once

class Circle
{
public:
	//these are public and they are accessed in the main function
	float radius;

	//float getArea and float getCircumgference  are declared here but defined in the source file being the Objects.cpp
	float getArea();
	float getCircumference();

private:
	//private classes are artibutes what only that class can have.
	float pi = 3.142f;

};

class Square 
{
public: 
	float sideLength;
	float getArea();
	float getPerimeter();
};
