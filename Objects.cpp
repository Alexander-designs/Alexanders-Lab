#include "Objects.h"
#include <iostream>
//circle
float Circle::getArea() 
{
	//PI * r^2
	return pi * radius * radius;
}
float Circle::getCircumference()
{
	// 2 * PI * radius
	return 2 * pi * radius;
}
float Square::getArea()
{
	//side * side
	return sideLength * sideLength;
}
//square
float Square::getArea()
{
	return sideLength * sideLength;
}
float Square::getPerimeter()
{
	//4 * side
	return 4 * sideLength;
}