#include <iostream>
#include <string>
#include "Book.h"
#include "Library.h"
using namespace std;

void test1()
{
	Book myBook;
	myBook.SetBookInfo("Harry Potter", "JK Rowling");
	myBook.SetPurchaseStatus(WISHLIST);
	cout << "Title: " << myBook.GetTitle();
	cout << "Author: " << myBook.GetAuthor();
	cout << "Purchase: " << myBook.GetPurchaseStatusString();
	cout << "Purchase number stat: " << myBook.GetPurchaseStatus();

	Book book2;
	book2.SetReadingStatus(FINISHED);
	cout << "Number reading status: " << book2.GetReadingStatus();
	cout << "String: " << book2.GetReadingStatusString();

	Book book3;
	book3.SetBookInfo("title1", "at1");
	book3.SetReadingStatus(NOT_STARTED);
	book3.SetPurchaseStatus(OWNED);
	book3.DisplayBook();
}
void test2()
{
	Library ll;
	ll.AllocateMemory(5);
	cout << "Size: " << ll.GetArraySize() << endl;

	Library l2;
	l2.AllocateMemory(3);
	l2.ResizeArray();
	cout << "Size shoudl be 13... : " << l2.GetArraySize() << endl;
}

int main()
{
	test2();
	while (true);
	return 0;
}