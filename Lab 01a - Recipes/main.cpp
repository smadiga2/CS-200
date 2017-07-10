#include <iostream>
using namespace std;
int main()
{
	/*double ratio;
	cout << "How many batches would you like to make? ";
	cin >> ratio;
	double bakingSoda = 1 * ratio;
	double bakingPowder = 0.5 * ratio;
	double butter = 1 * ratio;
	double whiteSugar = 1.5 * ratio;
	double egg = 1 * ratio;
	cout << bakingSoda << " tsp    baking soda" << endl;
	cout << bakingPowder <<" tsp    baking powder" << endl;
	cout << butter << " cups   butter" << endl;
	cout << whiteSugar <<" cups   white sugar" << endl;
	cout << egg <<"        egg" << endl;
	*/

	int count = 3;

	while (--count > 0)
	{
		cout << count << " ";
	}
	int n = 1;
	do
	{
		cout << n << " ";
	} while (n++ <= 3);
	while (true);
	return 0;
}