#include <iostream>
#include <cmath>
#include <array>
#include <fstream>
 
 // Backward Euler Method for dy/dt=-y with initial data y(0)=1;
int main() { 

  const int N =10000; //number for grid points
  double h=1.0/N;   // step size

  std::array<double,N> x;
  std::array<double,N> y;
  x[0]=0.0;
  y[0]=1.0;
  std::ofstream out("xy.dat");
  assert(out.is_open());
  out.setf(std::ios::scientific|std::ios::showpos);
  out << x[0] << " " << y[0] << " " << "\n";
   for (int i=1; i< N+1; ++i)
   { 
     y[i]=y[i-1]/(1.0+h);
     x[i]= i*h;
     out << x[i] << " " << y[i] << " " << "\n"; 
   }
    out.close();
   return 0;
 }