#include <iostream>
#include <string>
using namespace std;


int main()
{

	string students[3] = { "Sarah", "Steven", "Joseph" };
	string* ptrStudent = nullptr;

	cout << "Enter an index: 0, 1, 2" << endl;
	int choice;
	cin >> choice;
	ptrStudent = &students[choice];

	cout << "Enter a new name for the student " << endl;
	string newName;
	cin >> newName;
	*ptrStudent = newName;

	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		cout << "student " << i << " = " << students[i];
	}

	while (true);

	return 0;
}