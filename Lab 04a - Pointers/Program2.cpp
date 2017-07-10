#include <iostream>
#include <string>
using namespace std;
int main()
{
	string names[4] = { "Sarah", "Steven", "Joseph", "Monika" };
	cout << "Array address: " << names << endl;

	for (int i = 0; i < 4; i++)
	{
		cout << "Item " << i << " address: " << &names[i] << "\t Value: " << names[i] << endl;
	}
	while (true);
	return 0;
}