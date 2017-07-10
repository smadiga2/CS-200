#include <iostream>
#include <string>
using namespace std;
int main()
{
	int number = 121;
	float floater = 233.26;
	string aWord = "Another word";

	int* ptrNumber = &number;
	float* ptrFloater = &floater;
	string* ptrAWord = &aWord; 

	cout << "PROGRAM 3: " << endl;
	cout << "Address " << ptrNumber << " = " << number << endl;
	cout << "Address " << ptrFloater << " = " << floater << endl;
	cout << "Address " << ptrAWord << " = " << aWord << endl;

	while (true);
	return 0;
}