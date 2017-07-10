#include <string>;
#include <iostream>;
using namespace std;
int main()
{
	float percentage;
	cout << "What is your current battery charge percentage? ";
	cin >> percentage;
	if (percentage >= 75)
	{
		cout << "[****]";
	}
	else if (percentage >= 50)
	{
		cout << "[*** ]";
	}
	else if (percentage >= 25)
	{
		cout << "[**  ]";
	}
	else
	{
		cout << "[*   ]";
	}
	while (true);
	return 0;
}
