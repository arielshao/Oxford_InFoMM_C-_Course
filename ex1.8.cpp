#include <iostream>
#include <cmath>
#include <cassert>
#include <array>
#include <iomanip> 
//calculate the matrix product of two 3*3 matrix

int main()

{   std::array<std::array<double,3>,3> A={{{1,2,3},{1,1,1},{3,2,1}}};
	std::array<std::array<double,3>,3> B={{{2,1,0},{0,1,1},{3,0,1}}};
    std::array<std::array<double,3>,3> C;
    double num=0.0;
 
   for (int i=0;i<3;++i){
   	for (int j=0;j<3; ++j){
   		for (int k=0;k<3;k++){
   			num+=A[i][k]*B[k][j];
   		}
    	C[i][j]=num;
    }
}
 std::cout<<'|'<< std::setw(3)<< C[0][0] << ", " << std::setw(3)<<C[0][1]<<","<< std::setw(3)<<C[0][2]<<"|"<<"\n"<<
  "|"<< std::setw(3)<< C[1][0] << ", " << std::setw(3)<<C[1][1]<<","<< std::setw(3)<<C[1][2]<<"|"<< "\n"<<
  "|"<< std::setw(3)<< C[2][0] << ", " << std::setw(3)<<C[2][1]<<","<< std::setw(3)<<C[2][2]<<"|"<<std::endl;

return 0;
}