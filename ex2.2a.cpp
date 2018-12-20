#include<iostream>
// This function accepts two floating point numbers
// and swaps the values of these numbers.

// (a) Using pointers 

using namespace std;

//Function prototype

void swap(float *, float*);

int main()

{
	float a=1.0 , b=2.2;
	cout<< " Before swapping " <<endl;
	cout<< " a= " <<a <<endl;
	cout<< " b= " <<b <<endl;

	swap(&a, &b);
	cout<< " After swapping " <<endl;
	cout<< " a= " <<a <<endl;
	cout<< " b= " <<b <<endl;
	return 0;

}
void swap( float *pa, float *pb)
 {
	float temp;
	temp= *pa;
	*pa= *pb;
	*pb= temp;
}