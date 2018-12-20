#include<iostream>
#include <cmath>
#include <cassert>
#include <array>

// This function computes the p-norm of a given std::array<double,3>
// p takes the default value 2.
using namespace std;
//Function prototype

 double pnorm(array<double,3> v, int p);

int main()

{
	std::array<double,3> v={1,2,3};
	int p=2;
	cout<< " The p norm of"<< v[0]<<","<<v[1]<<","<<v[2]<<" is "<< pnorm(v, p=5) <<endl;
    
	return 0;

}
  double pnorm(array<double,3>v, int p)

 {   double accum;
	
    for (int i=0; i<3; ++i){
    	
    	accum+= pow(v[i],p);
    }
        return pow(accum, 1./p);
  }

