#include "Library.h"#include <string>#include <iostream>using namespace std;Library::~Library(){
	DeallocateMemory();}Library::Library(){
	m_bookList = nullptr;	m_arraySize = 0;	m_bookCount = 0;	AllocateMemory(10);}void Library::DeallocateMemory(){
	if (m_bookList != nullptr)	{		delete[] m_bookList;		m_bookList = nullptr;		m_arraySize = 0;		m_bookCount = 0;	}}void Library::AllocateMemory(int size){
	if (m_bookList == nullptr)	{		DeallocateMemory();	}	Book* bookArray = new Book[size];	m_arraySize = size;}void Library::ResizeArray(){
	Book* biggerArray;	biggerArray = new Book[m_arraySize + 10];	for (int i = 0; i < m_arraySize; i++)	{		m_bookList[i] = biggerArray[i];	}	delete[] m_bookList;	m_bookList = biggerArray;	m_arraySize += 10; }int Library::GetArraySize(){
	return m_arraySize;}int Library::GetBookCount(){
	return m_bookCount;}bool Library::IsArrayFull(){	if (m_arraySize == m_bookCount)	{		return true;	}	else if (m_bookCount < m_arraySize)	{		return false; 	}	else	{		return false;	}}