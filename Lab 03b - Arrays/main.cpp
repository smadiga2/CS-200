#include <iostream>
#include <string>
using namespace std;

void Program1()
{
	// I'm assuming that it's okay that I did this as a loop at first, given what program 2 said to do
	string names[5] = { "Xia", "Shang", "Zhou", "Qin", "Han" };
	for (int i = 0; i <= 4; i++)
	{
		cout << names[i] << endl;
	}
	cout << endl;
}

void Program2()
{
	int index = 0;
	int arraySize = 5;
	string names[5] = { "Xia", "Shang", "Zhou", "Qin", "Han" };
	while (index < arraySize)
	{
		cout << names[index] << endl;
		index++;
	}
	cout << endl;
}

void Program3()
{
	string items[3];
	string prices[3];
	int arraySize = 3;
	int itemCount = 0;
	while (itemCount < arraySize)
	{
		string itemName;
		cout << "Enter item name: ";
		cin >> items[itemCount];
		cout << "Enter price: ";
		cin >> prices[itemCount];
		itemCount++;
	}
	int counter = 0;
	cout << endl;
	while (counter < itemCount)
	{	
		cout << "Item #" << counter << ": " << items[counter] << ", $" << prices[counter] << endl;
		counter++;
	}
	cout << endl;
}

void Program4()
{
	string letters[5] = { "A", "B", "C", "D", "E" };
	for (int i = 0; i < 5; i++)
	{
		cout << letters[i] << endl;
	}

}

void Program5()
{
	string items[3];
	string prices[3];
	int arraySize = 3;
	int itemCount = 0;
	for (itemCount; itemCount < arraySize; itemCount++)
	{
		string itemName;
		cout << "Enter item name: ";
		cin >> items[itemCount];
		cout << "Enter price: ";
		cin >> prices[itemCount];
		cout << itemCount;
	}
	
	cout << endl;
	for (int counter = 0; counter < itemCount; counter++)
	{
		cout << "Item #" << counter << ": " << items[counter] << ", $" << prices[counter] << endl;
	}
	cout << endl;
}

void Program6()
{
	string cities[20];
	int arraySize = 20;
	cities[0] = "Lee's Summit";
	cities[1] = "Raytown";
	cities[2] = "Independence";
	cities[3] = "Belton";
	int itemCount = 4;

	for (int i = 0; i < itemCount; i++)
	{
		cout << cities[i] << endl;
	}
}

int main()
{
	bool done = false;

	while (!done)
	{
		int choice;
		cout << "0. QUIT" << endl;
		cout << "1. Program 1" << endl;
		cout << "2. Program 2" << endl;
		cout << "3. Program 3" << endl;
		cout << "4. Program 4" << endl;
		cout << "5. Program 5" << endl;
		cout << "6. Program 6" << endl;
		cout << endl << ">> ";
		cin >> choice;

		switch (choice)
		{
		case 0: done = true; break;
		case 1: Program1(); break;
		case 2: Program2(); break;
		case 3: Program3(); break;
		case 4: Program4(); break;
		case 5: Program5(); break;
		case 6: Program6(); break;
		}
	}

	return 0;
}