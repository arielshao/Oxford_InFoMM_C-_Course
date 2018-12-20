#include<iostream>
// This function accepts two floating point numbers
// and swaps the values of these numbers.

// (b) Using reference 

using namespace std;

//Function prototype

void swap(float&, float&);

int main()

{
	float a=100, b=2.333;
	cout<< " Before swapping " <<endl;
	cout<< " a= " <<a <<endl;
	cout<< " b= " <<b <<endl;

	swap(a, b);
	cout<< " After swapping " <<endl;
	cout<< " a= " <<a <<endl;
	cout<< " b= " <<b <<endl;
	return 0;

}
void swap( float& pa, float& pb)
 {
	float temp;
	temp= pa;
	pa= pb;
	pb= temp;
}