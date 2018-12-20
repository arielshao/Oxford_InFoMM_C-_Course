#include<iostream>
#include <cmath>
#include <cassert>
#include <array>


// This function computes the p-norm of a given std::array<double,3>
// p takes the default value 2.
// Inputting p to the lambda function as an argument 
using namespace std;

int main()
{  array<double,3> v={1,2,3};

  auto pnorm=[=](int p, array<double,3>v){
    double accum=0.0;
  
    for (int i=0; i<3; ++i){
      
      accum+= pow(v[i],p);
    }
        return pow(accum, 1./p);
  };

  cout<< " The p norm of"<< v[0]<<","<<v[1]<<","<< v[2]<< " is "<< pnorm(5,v) <<endl;
    
  return 0;
  }   

