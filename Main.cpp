// https://www2.cs.sfu.ca/CourseCentral/125/tjd/vector_example.html

#include <iostream>
#include "myintvector.h"
using namespace std;

int main()
{
	MyIntVector v; //default constructor will set size to 10
	v.push_back(2); // push the integer 2 into the vector
	v.size();
	v.resize();
	v.capacity();
	v.at(5);
	v.operator[](5);


	for (int i = 0; i < v.size(); ++i)
	{
		cout << v.get(i) << " ";
	}
	cout << endl;

	return 0;
}

