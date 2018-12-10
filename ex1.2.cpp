#include <iostream>
#include <cmath>
#include <random>
 // Generate N uniform random numbers between -1 and 1 
 //  Count the number of points where sqrt(x^2+y^2)<1
 //  Estimation of pi 
int main() { 

// generates a pseudo-random number sequence
std::default_random_engine generator;
// uses generator to output a uniform distribution 
std::uniform_real_distribution<double> uniform(-1.0,1.0);

 //print out the sequence 
 double x,y;
 int s=0;
 int N=100000;
for (int i=1; i< N;++i)
{ 
 
  x=uniform(generator);
  y=uniform(generator);

  if (sqrt(x*x+y*y)<1)
  {
  	++s;
  }
    
}
 const double pi = 4.0*s/N;
  std::cout<< s << "\n";
  std::cout<< " Pi is around " << pi << "\n";
  return 0;
}
