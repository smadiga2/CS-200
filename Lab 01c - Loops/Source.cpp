#include <iostream>
using namespace std;

// Function 1
void F1_CountingUp()
{
	cout << "F1_CountingUp" << endl;
	int counter = 0;
	cout << "WHILE LOOP" << endl;
	while (counter < 10)
	{
		cout << counter << "\t";
		counter++;
	}
	cout << endl << "FOR LOOP" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << i << "\t";
	}
}

// Function 2
void F2_MultiplyUp()
{
	cout << "F2_MultiplyUp" << endl;
	int counter = 1;
	cout << "WHILE LOOP" << endl;
	while (counter < 200)
	{
		cout << counter << "\t";
		counter *= 2;
	}
	cout << endl << "FOR LOOP" << endl;
	for (int i = 1; i < 200; i *= 2)
	{
		cout << i << "\t";
	}
}

// Function 3
void F3_NumberGuesser()
{
	cout << "F3_NumberGuesser" << endl;
	int secretNumber = 2;
	int playerGuess;
	do
	{
		cout << "Guess a number" << endl;
		cin >> playerGuess;
		if (playerGuess < secretNumber)
		{
			cout << endl << "Too low!" << endl;
		}
		else if (playerGuess > secretNumber)
		{
			cout << endl << "Too high!" << endl;
		}
	} while (playerGuess != secretNumber);
	cout << "You Win!" << endl;
}

// Function 4
void F4_InputValidator()
{
	cout << "F4_InputValidator" << endl;
	cout << "Please enter a number between 0 and 5" << endl;
	int choice;
	cin >> choice;
	while (choice < 0 || choice > 5)
	{
		cout << "Invalid entry.  Try again." << endl;
		cin >> choice;
	}
	cout << "Thank you!" << endl;
}

// Function 5
void F5_GettingARaise()
{
	cout << "F5_GettingARaise" << endl;
	float startingWage;
	float percentRaisePerYear;
	float adjustedWage;
	int yearsWorked;
	cout << "Enter your starting wage: " << endl;
	cin >> startingWage;
	cout << "Enter your percent wage increase per year: " << endl;
	cin >> percentRaisePerYear;
	cout << "Enter your amount of years worked" << endl;
	cin >> yearsWorked;
	adjustedWage = startingWage;
	for (int i = 1; i < yearsWorked; i++)
	{
		adjustedWage = adjustedWage + (adjustedWage * (percentRaisePerYear/100));
	}
	cout << "Your wage currently is: $" << adjustedWage << endl;
}

// Function 6
void F6_Summation()
{
	cout << "F6_Summation" << endl;
	float sum = 0;
	for (int i = 0; i <= 10; i++)
	{
		sum = sum + i;
	}
	cout << "Sum: " << sum << endl;
}

/* Don't modify the code below! ****************************************/

int main()
{
	F1_CountingUp();
	cout << endl << endl;

	F2_MultiplyUp();
	cout << endl << endl;

	F3_NumberGuesser();
	cout << endl << endl;

	F4_InputValidator();
	cout << endl << endl;

	F5_GettingARaise();
	cout << endl << endl;

	F6_Summation();
	cout << endl << endl;


	cout << endl << endl;
	while (true);
	return 0;
}