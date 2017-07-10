#include <iostream>
#include <string>
using namespace std;


int main()
{
	float priceHamburger = 9;
	float priceFries = 5;
	float priceSalad = 3; 
	float* ptrPrice = nullptr; 
	cout << "Do you want hamburger, fries, or a salad? ";
	string choice; 
	cin >> choice; 
	if (choice == "hamburger")
	{
		ptrPrice = &priceHamburger;
		cout << "Original Price: $" << priceHamburger << endl;
		float taxAmt = (*ptrPrice * 0.065);
		*ptrPrice += taxAmt;
		cout << "With tax price: $" << *ptrPrice;
	}
	else if (choice == "fries")
	{
		ptrPrice = &priceFries;
		cout << "Original Price: $" << priceFries << endl;
		float taxAmt = (*ptrPrice * 0.065) ;
		*ptrPrice += taxAmt;
		cout << "With tax price: $" << *ptrPrice;
	}
	else if (choice == "salad")
	{
		ptrPrice = &priceSalad;
		cout << "Original Price: $" << priceSalad << endl;
		float taxAmt = (*ptrPrice * 0.065);
		*ptrPrice += taxAmt;
		cout << "With tax price: $" << *ptrPrice;
	}
	else
	{
		cout << "Invalid" << endl;
	}
	//float taxAmt = *ptrPrice * 0.0065;
	//ptrPrice += taxAmt; 


	
	
	while (true);

	return 0;
}