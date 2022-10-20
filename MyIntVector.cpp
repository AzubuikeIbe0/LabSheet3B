#include <iostream>
#include "myintvector.h"
using namespace std;



MyIntVector() {
	m_size = 0;
	m_capacity = 10;
	if (n < 0) error("negative size array");
	v = new int[10];
	for (int i = 0; i < m_capacity; ++i) {
		arrPtr[i] = 0;
	}
}

void MyIntVector::m_capacity(int sz)
{
	int* v;  // pointer to the first element of this myvec
	int capacity; // number of elements arr can hold 
	int n;

	if (sz <= capacity)
		return;

	int* new_arr = new int[sz];

	for (int i = 0; i < capacity; ++i)
	{
		new_arr[i] = v[i];
	}
	capacity = sz;

	delete[] v;
	v = new_arr;
}


const int MyIntVector::size()
{
	return n;
}


int MyIntVector::push_back(int val)
{
	if (n >= capacity) m_capacity(2 * capacity);
	v[n] = x;
	++n;
}

const int MyIntVector::resize(int i) {
	for (int i = 0; <= v.size; i++)
		if (arr[i] > v.size) {
			v[i] = 0;
		}
}



void set(int i, double val) {
	if (i < 0 || i >= n) error("range error");
	arr[i] = val;
}

double get(int i) const {
	if (i < 0 || i >= n) error("range error");
	return v[i];
}

MyIntVector::~MyIntVector() {
	delete[] v;
}

MyIntVector::at(int i) {
	return v[i]
}



int& MyIntVector::operator[](int i) {
	if (i < 0 || i >= n) error("range error");
	return v[i];
}

const int& MyIntVector::operator[](int i) const {
	if (i < 0 || i >= n) error("range error");
	return v[i];
}


