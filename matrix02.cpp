exer02
//RAMZI MARESH AL-FAIZE

#include <iostream>
#include <iomanip>
using namespace std;
const int ROW_M = 3, COL_M = 2, ROW_N = 2, COL_N = 3;
int M[ROW_M][COL_M] = {} , N[ROW_N][COL_N] = {},MN[COL_N][ROW_M] = {} , total = 0;
void MultiMatrix(int a[][2], int b[][3]);
int calcTotal(int a[][ROW_M]); // find sum of elements
int main()
{
	cout << "Enter values for array P:" << endl;
	for(int i=0;i< ROW_M;i++){
		for(int j=0;j< COL_M;j++){
		cin>> *(M[i]+j);		
		}
	}
	cout << "Enter values for array Q:" << endl;
	for (int i = 0; i < ROW_N; ++i)
	{
		for (int j = 0; j < COL_N; ++j){
		cin >> *(N[i] + j);
		}
	}
	MultiMatrix(M,N);
	total = calcTotal(MN);
	cout << endl <<  "PQ or the determine of PQ is: " << total << endl;
	return 0;
}
void MultiMatrix(int a[][2], int b[][3]){
		for (int i = 0; i < ROW_M; ++i)
		for (int j = 0; j < COL_N; ++j)
			for (int k = 0; k < COL_M; ++k)
			{
				*(MN[i] + j) += *(a[i] + k) * *(b[k] + j);
			}
	cout << endl << "Matrix P x Q is: " << endl << endl;
	for (int i = 0; i < ROW_M; ++i)
	{
		cout << "|";
		for (int j = 0; j < COL_N; ++j)
		{
			cout << setw(4) << right << * (MN[i] + j);
		}
		cout <<  "  |" << endl;
	}
}
int calcTotal(int a[][3])
{
	int sum = 0;
	for (int i = 0; i < ROW_M; ++i)
	{
		for (int j = 0; j <COL_N ; ++j)
		{
			sum += *(a[i] + j);
		}
	}
	return sum;
}
