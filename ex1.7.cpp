#include <iostream>
#include <cmath>
#include <cassert>
#include <array>

//calculate the scalar (dot) product of two std::array<double,3> variables

int main()

{   std::array<double,3> a={1,2,3};
	std::array<double,3> b={4,5,6};
    

	assert(a.size() == b.size());
    double product=0;

    for (int i=0; i<3; ++i){
    	product=product+a[i]*b[i];
    }


  std::cout<< " The scalar product of a and b is " << product << "\n";

}