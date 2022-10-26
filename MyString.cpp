#include "MyString.h"

istream& operator>>(istream& in, MyString& temp)
{
	int i, key;
	do {
		for (i = 0; (i < 80) && (key = getchar()) != '\n'; i++, temp.size++)
			temp.array[i] = key;
		temp.array[i] = '\0';
	} while (temp.size < 1);
	return in;
}
ostream& operator<<(ostream& out, MyString temp)
{
	for (int i = 0; i < temp.size; i++)
		out << temp.array[i];
	return out;
}
char* MyString::substring(int start, int number)
{
	char* tmp = new char(number);
	int dem = 0;
	for (int i = start; number > 0; i++, number--, dem++)
		tmp[dem] = array[i];
	tmp[dem] = '\0';
	return tmp;
}
char* MyString::operator+(const MyString& tmp)
{
	char* bruh = new char(size + tmp.size);
	int i = 0;
	for (i = 0; i < size; i++)
		bruh[i] = array[i];
	for (int j = 0; j < tmp.size; j++)
		bruh[i + j] = tmp.array[j];
	bruh[size + tmp.size] = '\0';
	return bruh;
}
bool MyString::insert(int start, const char* good)
{
	if (start > size || start < 0)
		return false;
	char* bruh = new char(100);
	int i;
	for (i = 0; i < start; i++)
		bruh[i] = array[i];
	// cout <<"Chieu dai doan dau: " << i << endl;
	int k = 0;
	while (good[k] != '\0')
	{
		bruh[start + k] = good[k];
		k++;
	}
	bruh[start + k] = '\0';
	// cout << k << endl;

	int j = i;
	for (; j < size + k; j++,i++)
		bruh[j + k] = array[i];
	bruh[size + k + 1] = '\0';

	// cout << bruh << endl;
	size = size + k;
	array = bruh;
	return true;
}