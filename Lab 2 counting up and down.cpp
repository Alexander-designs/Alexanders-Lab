// Lab 2 counting up and down.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //This loop starts at 1 and doesnt stop until its equal to 20.
    cout << "Counting";
    // i++ is counting upwards by one each time
    cout << "Counting from 1 to 20\n";
    for (int i = 1; i <= 20; i++)
    {
        cout << i << " ";

    }
    //This loop starts at 100 and stops at 0.
    // i-=5 means that it goes down [by 5 each time until it hits 0.
    cout << "\n\nCounting down from 100 to 0 in 5s\n";
    for (int i = 100; i >= 0; i -= 5)
    {
        cout << i << " ";
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
