#include <iostream>
#include <cmath>
#include <random>
 
 //  Estimation of pi using Gauss-Legendre algorithm
int main() { 

  const int nterms =1000; //number for terms
  

 //print out the sequence 
 double a=1.0;
 double b=1.0/sqrt(2.0);
 double t=1.0/4.0;
 double p=1.0;
 double anew, bnew,pnew,tnew;


for (int n=1; n< nterms;++n)
{  
  anew=(a+b)/2.0;
  bnew=sqrt(a*b);
  tnew=t-p*(a-anew)*(a-anew);
  pnew=2.0*p;
  a=anew;
  b=bnew;
  t=tnew;
  p=pnew;
  }
  double pi= (a+b)*(a+b)/(4.0*t);
  std::cout<< " Pi is around " << pi << "\n";
}
