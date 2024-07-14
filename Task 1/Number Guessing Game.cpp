// --------------------------------------------------------------------------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

// --------------------------------------------------------------------------------------------------------------------


int main()
{
	// Presentation Variables

	system("color F0");	// Console background color = white

	time_t now = time(0); tm* ltm = localtime(&now); // Date and time

	cout << "\n Time: " << ltm->tm_hour << ":" << ltm->tm_min << "\t\t\t\t " << " Date: " << ltm->tm_mday << ":" << 1 + ltm->tm_mon << ":" << 1900 + ltm->tm_year
        << "\n --------------------------------------------------------" << endl;

	// ----------------------------------------------------------------------------------------------------------------

	// Working

    srand(time(0));

    int randomNumber = rand() % 100 + 1;
    int guess = 0;

    cout << "\n\t  Welcome to the Number Guessing Game!" << endl;
    cout << " --------------------------------------------------------" << endl;
    cout << "\n The program has selected a number between 1 and 100 and \n you have to guess what it is." << endl;

    while (guess != randomNumber) 
    {
        cout << "\n -> Enter your guess: ";
        cin >> guess;

        if (guess > randomNumber)
            cout << "\n Too high! Try again." << endl;
        else if (guess < randomNumber)
            cout << "\n Too low! Try again." << endl;
        else
            cout << "\n -------------------------------------------------------- \n Congratulations! You guessed the correct number: " << randomNumber << endl;
    }

    cout << " --------------------------------------------------------" << endl;

	return 0;
}