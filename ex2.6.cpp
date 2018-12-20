#include<iostream>
#include <cmath>
#include <array>
#include <vector>

// This function computes the p-norm of a given std::array<double,3>
// p takes the default value 2.
using namespace std;
//Function prototype

 double pnorm(array<double,3> v, int p);
 double pnorm(vector<double>w, int p);

int main()

{
	array<double,3> v={1,2,3};
  vector<double> w;
  w.push_back(1.0);
  w.push_back(1.0);
  w.push_back(1.0);
	int p=2;
	cout<< " The p norm of"<< v[0]<<","<<v[1]<<","<<v[2]<<" is "<< pnorm(v, p=5) <<endl;
  cout<< " The p norm of"<< w[0]<<","<<w[1]<<","<<w[2]<<" is "<< pnorm(w, p=1) <<endl;
    
	return 0;

}
  
  double pnorm(array<double,3>v, int p)

 {   double accum;
	
    for (int i=0; i<3; ++i){
    	
    	accum+= pow(v[i],p);
    }
        return pow(accum, 1./p);
  }

  double pnorm(vector<double>w, int p)
  
  {   double accum;
    // indexed based loop
    //for (int i=0; i< w.size(); ++i){ 
    //accum+= pow(w[i],p);
    //}
    // range-based loop
    // for (auto i :w){
    // accum += pow(i,p); 
    // }

    // an iterator-based loop
    for (vector<double>::iterator i=w.begin(); i !=w.end();++i){
      accum+= pow(*i,p);
    }
        return pow(accum, 1./p);
  }


