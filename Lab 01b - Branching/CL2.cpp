#include <string>
#include <iostream>
using namespace std;
int main() 
{
	string homeTown;
	string name;
	cout << "What is your hometown?" << endl;
	cin >> homeTown;
	if (homeTown.size() > 6)
	{
		cout << endl << "That's a long name!" << endl;
	}
	cout <<endl<< "What is your name?" << endl;
	cin >> name;
	cout << endl << "Hello, " << name << " from " << homeTown << "!"; 
	while (true);
	return 0;

}