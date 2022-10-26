#pragma once
#ifndef _MY_STRING_
#define _MY_STRING_
#include <iostream>
using namespace std;
class MyString
{
	int size;
	char *array;
public:
	MyString() 
	{ 
		size = 0; 
		array = new char(100);
	};
	int length() { return size; }
	char* substring(int start, int number);
	char* operator+(const MyString& tmp);
	bool insert(int, const char*);
	friend istream& operator>>(istream& in, MyString& temp);
	friend ostream& operator<<(ostream& out, MyString temp);
};
istream& operator>>(istream& in, MyString& temp);
ostream& operator<<(ostream& out, MyString temp);
#endif // !_MY_STRING_
