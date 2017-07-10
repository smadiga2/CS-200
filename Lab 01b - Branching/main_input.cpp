#include <iostream>;
#include <string>;
using namespace std;
int main()
{
	int userChoice;
	cout << "What is your favorite fruit?" << endl;
	cout << "1. Apple" << endl;
	cout << "2. Banana" << endl;
	cout << "3. Pear" << endl;
	cout << "4. Strawberry" << endl << "Your Selection: ";
	cin >> userChoice;
	if (userChoice < 1 || userChoice > 4)
	{
		cout << "Invalid choice!" << endl;
	}
	else
	{
		cout << "Good choice!" << endl;
	}
	while (true);
	return 0; 
}