#include <iostream>;
#include <string>;
using namespace std;
int main()
{
	float a;
	float b;
	int choice;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	
	cout << "What kind of operation? (1) Add, (2) Subtract, (3) Multiply, (4) Divide" << endl << "Choice: "; 
	cin >> choice; 

	switch (choice)
	{
		case 1:
			cout << a + b;
			break;

		case 2:
			cout << a - b;
			break;

		case 3:
			cout << a*b;
			break;

		case 4: 
			cout << a / b;
			break;
			
		default:
			cout << "Invalid choice";
	}
	while (true);
	return 0;
}