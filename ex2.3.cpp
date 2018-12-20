#include<iostream>
#include <cmath>
#include <cassert>
#include <array>

// This function returns the scalar (dot) product of two std::array<double,3> vectors. 
// Overload this function for to multiply two scalar double values.



//Function prototype

void ScalarProduct(std::array<double,3> a , std::array<double,3> b, double & rc);

int main()

{
	std::array<double,3> a={1,2,3};
	std::array<double,3> b={3,2,1};
	double c;

	ScalarProduct(a, b, c);
	std::cout<< " The scalar product of a and b is "<< c<<std::endl;
	return 0;

}
 void ScalarProduct(std::array<double,3>a, std::array<double,3>b, double & rc)

 {
	assert(a.size() == b.size());
   
    for (int i=0; i<3; ++i){
    	rc+=a[i]*b[i];
    }
  }