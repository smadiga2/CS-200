#include <iostream>
#include <string>
using namespace std;
int main()
{
	int number = 1;
	float floater = 2.3;
	string aWord = "Sarah";

	cout << "Address " << &number << " = " << number << endl;
	cout << "Address " << &floater << " = " << floater << endl;
	cout << "Address " << &aWord << " = " << aWord << endl;
	while (true);
	return 0;
}