#pragma once
#ifndef _LIBRARY_H
#define _LIBRARY_H
#include <iostream>
#include <string>
#include "Book.h"
using namespace std;
class Library
{
private: 
	Book* m_bookList;
	int m_arraySize;
	int m_bookCount;
public:
	Library();
	~Library();
	void DeallocateMemory();
	void AllocateMemory(int size);
	void ResizeArray();
	int GetArraySize();
	int GetBookCount();
	bool IsArrayFull();
};
#endif