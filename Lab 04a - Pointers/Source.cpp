#include <iostream>
#include <string>
using namespace std;


int main()
{
	while (true)
	{ 
		cout << "How many bytes is it?" << endl << endl << "Choose one of the following data types: " << endl << "[i]nt, [f]loat, [b]oolean, or [d]ouble?" << endl;
		cout << endl;
		cout << ">> ";
		string choice;
		cin >> choice;

		if (choice == "i")
		{
			cout << "An integer size is: " << sizeof(int) << " bytes" << endl;
		}
		else if (choice == "f")
		{
			cout << "A float size is: " << sizeof(float) << " bytes" << endl;
		}
		else if (choice == "b")
		{
			cout << "A boolean size is: " << sizeof(bool) << " byte" << endl;
		}
		else if (choice == "d")
		{
		cout << "A double size is: " << sizeof(double) << " bytes" << endl;
		}
		else
		{
			cout << "invalid input" << endl;
		}
		cout << endl << endl;
	}
	while (true);

	return 0;
}