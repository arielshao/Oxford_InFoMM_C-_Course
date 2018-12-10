#include <iostream>
#include <cmath>
#include <array>
#include <fstream>
#include <sstream>

 
// Backward Euler Method for dy/dt=-y with initial data y(0)=1;
// Error compared with the true solution y=exp(-x)
int main() { 
  double x, y, yexact,error,newerror;
  
  std:: string line;
  std:: ifstream input("xy.dat");
  assert(input.is_open());

  error=0.0;
  while (std::getline(input,line))
  {
    std::istringstream s(line);
    s >> x >> y;
    yexact=exp(-x);
    newerror=abs(y-yexact);
    std::cout<< " The error is " << newerror << "\n";
    error= std::max(error,newerror);
  }  
    std::cout<< " The max error is " << error << "\n";

  input.close();


   
  
   return 0;
 }