#include <iostream>
using namespace std;

// Input: A percent value (0% - 100%, no percent sign though)
// Output: The decimal equivalent (0.0 - 1.0)
float PercentToDecimal(float percent)
{
	float decimal = percent / 100;
	return decimal;
}

int main()
{
	float a = PercentToDecimal(50);
	float b = PercentToDecimal(12.5);
	float c = PercentToDecimal(99.99);
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;
	while (true);
	return 0;

}