#include <iostream>
#include <string>
using namespace std;

#include "Student.h"
#include "Fraction.h"
#include "Scholarship.h"

void Program1()
{
	Student newStudent;
	newStudent.name = "Sarah Madigan";
	newStudent.gpa = 1.0;
	newStudent.degree = "Computer Science";
	cout << "Student Name: " << newStudent.name << endl;
	cout << "Student GPA: " << newStudent.gpa << endl;
	cout << "Student Degree: " << newStudent.degree << endl;
	

}

void Program2()
{
	Fraction frac1;
	Fraction frac2;
	frac1.Setup(2, 3);
	frac2.Setup(3, 4);
	Fraction sum, difference, product, quotient;
	sum = frac1.Add(frac2);
	difference = frac1.Add(frac2);
	product = frac1.Multiply(frac2);
	quotient = frac1.Divide(frac2);
	frac1.Display(frac1);
	cout << " plus ";
	frac2.Display(frac2);
	cout << " = ";
	sum.Display(sum);

	cout << endl;

	frac1.Display(frac1);
	cout << " minus ";
	frac2.Display(frac2);
	cout << " = ";
	difference.Display(difference);

	cout << endl;

	frac1.Display(frac1);
	cout << " multiplied by ";
	frac2.Display(frac2);
	cout << " = ";
	product.Display(product);

	cout << endl;

	frac1.Display(frac1);
	cout << " divided by ";
	frac2.Display(frac2);
	cout << " = ";
	quotient.Display(quotient);

	cout << endl;
}

void Program3()
{
	Student students[9];
	students[0].name = "Sarah";
	students[1].name = "Steven";
	students[2].name = "Joseph";
	students[3].name = "Kevin";
	students[4].name = "Monika";
	students[5].name = "John";
	students[6].name = "Mike";
	students[7].name = "Sally";
	students[8].name = "Bob";

	students[0].gpa = 1.0;
	students[1].gpa = 3.4;
	students[2].gpa = 4.0;
	students[3].gpa = 2.3;
	students[4].gpa = 3.2;
	students[5].gpa = 3.5;
	students[6].gpa = 1.6;
	students[7].gpa = 3.2;
	students[8].gpa = 1.3;

	Scholarship scholarships[3];
	scholarships[0].Setup("small", 100, &students[0], &students[1], &students[2]);	
	scholarships[1].Setup("medium", 1000, &students[3], &students[4], &students[5]);
	scholarships[2].Setup("large", 10000, &students[6], &students[7], &students[8]);

	for (int i = 0; i < 3; i++)
	{
		scholarships[i].Display();
	}
}
int main()
{
	while (true)
	{
		cout << "1. Program 1" << endl;
		cout << "2. Program 2" << endl;
		cout << "3. Program 3" << endl;
		cout << "Run which lab? ";
		int choice;
		cin >> choice;

		cout << endl << endl;

		switch (choice)
		{
		case 1:     Program1();     break;
		case 2:     Program2();     break;
		case 3:     Program3();     break;
		}

		cout << endl << endl;
	}

	return 0;
}