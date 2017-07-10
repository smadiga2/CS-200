#include <iostream>
#include <string>
#include <cstdlib>      // to use rand()
#include <ctime>        // to use time()
#include <fstream>
using namespace std;
void prog1();
void prog2();
void prog3();
void prog4();

int main()
{
	srand(time(NULL));
	int choice;
	bool quit = false;
	while (!quit)
	{
		cout << "Enter the number of the program you want to run" << endl;
		cout << "1: Dynamic Variables" << endl << "2: Lotto numbers" << endl << "3: Build a buddy" << endl << "4: Reading in data from a text file" << endl << "5: quit" << endl;
		cin >> choice;
		if (choice == 1)
		{
			prog1();
		}
		else if (choice == 2)
		{
			prog2();
		}
		else if (choice == 3)
		{
			prog3();
		}
		else if (choice == 4)
		{
			prog4();
		}
		else if (choice == 5)
		{
			quit = true;
		}
	}
	return 0;
}

void prog1()
{
	int* myInt = new int;
	string* myStr = new string;
	float* myFloat = new float; 

	*myInt = 20;
	*myStr = "Sarah";
	*myFloat = 199.99;

	cout << "Integer: " << *myInt << endl;
	cout << "String: " << *myStr << endl;
	cout << "Float: " << *myFloat << endl;
	cout << endl;
	
	delete myInt;
	delete myStr;
	delete myFloat; 
}
void prog2()
{
	int lottoBalls;
	cout << "How many lotto balls will there be? \t";
	cin >> lottoBalls;

	int* lottoNumbers;
	lottoNumbers = new int[lottoBalls];
	for (int i = 0; i < lottoBalls; i++)
	{
		lottoNumbers[i] = rand() % 100; 
		cout << "Lotto ball " << i + 1 << " is " << lottoNumbers[i] << endl;
	}
	delete[] lottoNumbers;
	cout << endl;
}
void prog3()
{
	bool again = true;
	while (again = true)
	{ 
		int earsChoice;
		int headChoice;
		int bodyChoice;
		int feetChoice;
		string againChoice;

		cout << "Enter a choice between 0 and 2 (inclusive) for the ears: \t ";
		cin >> earsChoice;

		cout << "Enter a choice between 0 and 2 (inclusive) for the head: \t ";
		cin >> headChoice;

		cout << "Enter a choice between 0 and 2 (inclusive) for the body: \t ";
		cin >> bodyChoice; 

		cout << "Enter a choice between 0 and 2 (inclusive) for the feet: \t ";
		cin >> feetChoice;

		string ears[3] = { "   ^ ^   ",   "  n   n ",     "  *   *  " };
		string heads[3] = { " ( o_o ) ",   " ( x_x )" ,    " ( >_< ) " };
		string bodies[3] = { "/(     )\\",  "\\(     )/",   "o(     )o" };
		string feet[3] = { "  d   b   ",  "  @   @ ",     "  () () " };

		string * ptrEars = &ears[earsChoice];
		string * ptrHead = &heads[headChoice];
		string * ptrBody = &bodies[bodyChoice];
		string * ptrFeet = &feet[feetChoice];

		cout << endl << *ptrEars << endl << *ptrHead << endl << *ptrBody << endl << *ptrFeet << endl;
		cout << endl << endl;
		cout << "Again? (y/n): ";
		cin >> againChoice;
		if (againChoice == "y")
		{
			again = true;
		}
		else if (againChoice == "n")
		{
			again = false;
			break;
			cout << endl;
		}
	}

}
void prog4()
{
	cout << "Choose a starting point:" << endl
		 << "1. Kansas City" << endl
		 << "2. Seattle" << endl;

	int city;
	cin >> city;

	ifstream input;
	string cityName;

	if (city == 1)
	{
		input.open("from_kc.txt");
		cityName = "Kansas City";
	}
	else
	{
		input.open("from_seattle.txt");
		string cityName = "Seattle"; 
	}

	int locationCount = 0;
	input >> locationCount;
	string * locations = new string[locationCount];

	int * distances = new int[locationCount];
	cout << "Distance From " << cityName << " To..." << endl;
	for (int i = 0; i < locationCount; i++)
	{
		input >> locations[i] >> distances[i];
		cout << "* " << distances[i] << " miles - Distance from " << cityName << " to " << locations[i] << endl;
	}
	cout << endl;
	
	input.close();
}