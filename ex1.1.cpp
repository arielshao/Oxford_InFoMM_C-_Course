#include <iostream>
#include <cmath>

int main() {
	double x,y,sum,r;
    x=1;
    y=1;
    sum=pow(x,2)+pow(y,2);
    r= sqrt(sum);
    std::cout << "The sqrt is " << r << "\n";
}
