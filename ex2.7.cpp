#include <iostream>
#include <cmath>
#include <iomanip> 
#include <vector>
#include <ctime>
#include <ratio>
#include <chrono>
#include <Eigen/Dense>

 
using namespace std::chrono;
using namespace std; 
using namespace Eigen;
// This function is used to compute the multiplication of two matrices
// given their sizes.

void multiply(vector<vector<double>> &C , vector<vector<double>>  A, vector<vector<double>>B);
MatrixXd multiply2(MatrixXd mat1, MatrixXd mat2);

int main()
 
{


    int N = 1000;
	vector<vector<double> > A;
	vector<vector<double> > B;
    vector<vector<double> > C;
    MatrixXd A2(N, N);
    MatrixXd B2(N, N);
    MatrixXd C2(N, N);

    A.resize(N); B.resize(N); C.resize(N);
for (int i=0; i<N; i++)
{
    A[i].resize(N);
    B[i].resize(N); 
    C[i].resize(N);
}
    for (int i = 0; i < A.size(); i++){
        for (int j = 0; j < B.size(); j++){
            A[i][j]=i+j;
            B[i][j]=i-j;
            C[i][j]=0.0;
            A2(i, j) = A[i][j];
            B2(i, j) = B[i][j];
        }
    }
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
    multiply(C, A, B);
    high_resolution_clock::time_point t2 = high_resolution_clock::now();

   high_resolution_clock::time_point t3 = high_resolution_clock::now();
    C2 = multiply2(A2, B2);
    high_resolution_clock::time_point t4 = high_resolution_clock::now();



    //std::cout<<'|'<< setw(3)<< C[0][0] << ", " << setw(3)<<C[0][1]<<","<< setw(3)<<C[0][2]<<"|"<<"\n"<<
    //setw(3)<< C[1][0] << ", " << setw(3)<<C[1][1]<<","<< setw(3)<<C[1][2]<<"|"<< "\n"<<
    //"|"<< setw(3)<< C[2][0] << ", " << setw(3)<<C[2][1]<<","<< setw(3)<<C[2][2]<<"|"<<std::endl;

  
  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  duration<double> time_span2 = duration_cast<duration<double>>(t4 - t3);
  std::cout << " The multiplication of two matrices takes " << time_span.count() << " seconds.";
  std::cout << std::endl;

  std::cout << " The multiplication of two matrices takes using Eigen takes " << time_span2.count() << " seconds.";
  std::cout << std::endl;

return 0;

}

void multiply(vector<vector<double>>& C,vector<vector<double>> A, vector<vector<double>>B) {
	
	for (int i = 0; i < A.size(); ++i) {
		for (int j = 0; j < B.size(); ++j) {
			double sum = 0;
			for (int k = 0; k < A.size(); ++k) {
				sum = sum + A[i][k]*B[k][j];
			}
			C[i][j] = sum;
		}
	}

}
	


 MatrixXd multiply2(MatrixXd mat1, MatrixXd mat2)
 {
    MatrixXd mat3 =mat1 *mat2;
    return mat3;
 }
    
    


  




