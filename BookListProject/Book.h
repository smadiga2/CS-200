#pragma once
#ifndef _BOOK_HPP
#define _BOOK_HPP
#include <iostream>
#include <string>
using namespace std;

enum ReadingStatus{NOT_STARTED = 0, READING = 1, FINISHED = 2};
enum PurchaseStatus{OWNED = 0, WISHLIST = 1};
class Book
{
private: 
	string m_title;
	string m_author;
	PurchaseStatus m_purchaseStatus;
	ReadingStatus m_readingStatus; 

public: 
	void DisplayBook(); 
	string GetAuthor();
	int GetPurchaseStatus();
	string GetPurchaseStatusString();
	int GetReadingStatus();
	string GetReadingStatusString();
	string GetTitle();
	void SetBookInfo(string title, string author);
	void SetPurchaseStatus(PurchaseStatus ps);
	void SetReadingStatus(ReadingStatus rs);
};

#endif