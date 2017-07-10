#include <iostream>
#include <string>
using namespace std;

// Declare function here
float CountChange(int quarterCount, int dimeCount, int nickelCount, int pennyCount)
{
	float money = (quarterCount * .25) + (dimeCount * 0.10) + (nickelCount * 0.05) + (pennyCount * 0.01);
	return money; 
}

int main()
{
	while (true)
	{
		int quarters, dimes, nickels, pennies;

		cout << "How many quarters? ";
		cin >> quarters;

		cout << "How many dimes? ";
		cin >> dimes;

		cout << "How many nickels? ";
		cin >> nickels;

		cout << "How many pennies? ";
		cin >> pennies;

		float money = CountChange(quarters, dimes, nickels, pennies);
		cout << "Money: $" << money << endl;

		cout << endl << endl;
	}

	return 0;
}