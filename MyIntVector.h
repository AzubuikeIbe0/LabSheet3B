
#pragma once
#include <iostream>
using namespace std;

class MyIntVector
{

private:
	int m_size;

	int m_capacity;

	int* arrPtr;

public:
	int push_back(int val);

	const int size();

	int capacity();

	const int resize(int i);

	MyIntVector();

	~MyIntVector();

	const int at(int i);

	int& operator[](int);
};
