#include <iostream>;
#include <string>;
using namespace std;
int main()
{
	double score;
	double pointsPossible; 
	cout << "What's your score on the assignment? ";
	cin >> score;
	cout << "How many points were possible? ";
	cin >> pointsPossible;
	double percent = (score / pointsPossible) * 100;
	if (percent >= 70)
	{
		cout << "Score: " << percent << "%	Pass";
	}
	else
	{
		cout << "Score: " << percent << "%	Fail";
	}
	while (true);
	return 0;
}