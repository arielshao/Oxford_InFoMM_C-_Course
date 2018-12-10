#include <iostream>
#include <cmath>
#include <random>
 
 //  Estimation of pi using sum of 1/n^2
int main() { 

  const int nterms =1000000; //number for terms
  const int numberator = 1;

 //print out the sequence 
 double sum=0;
 double term=0;

for (int n=1; n< nterms;++n)
{  
  
  
  term = numberator /(double(pow(n,2)));
  sum += term;
  }
  double pi=sqrt(6*sum);
  std::cout<< " Pi is around " << pi << "\n";
  return 0;
}
