#include<iostream>
// This code sends the address of an integer to a function 
// that prints out the value of the integer


void integer(int x, int* pz);
int main() 
{
	int x=5, z;
	integer(x, &z);
	std::cout <<"The integer is "<< z <<"\n"; 
	return 0;
}

void integer(int x, int* pz)
{
	*pz = x; 
}