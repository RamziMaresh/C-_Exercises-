exer01
//RAMZI MARESH AL-FAIZE


#include <iostream>
#include <iomanip>
using namespace std;
const int ROW_M = 3, COL_M = 2, ROW_N = 2, COL_N = 2; //rows and cols for all matrices
int M[ROW_M][COL_M] = {} , N[ROW_N][COL_N] = {} , MN[COL_N][ROW_M] = {} , total = 0; // each matrix has to be empty at first so we wont get random data.
void MultiMatrix(int a[][2], int b[][2]); // multiplication.
int calcTotal(int a[][ROW_M]); // find sum of elements
int main()
{
	cout << "Enter values for array P:" << endl;
	for (int i = 0; i < ROW_M; ++i)
	{
		for (int j = 0; j < COL_M; ++j)
		{
			cin >> *(M[i] + j);
		}
	}
	cout << "Enter values for array Q:" << endl;
	for (int i = 0; i < ROW_N; ++i)
	{
		for (int j = 0; j < COL_N; ++j)
		{
			cin >> *(N[i] + j);
		}
	}
	MultiMatrix(M, N);
	total = calcTotal(MN);
	cout << endl <<  "the sum of elements in PQ is: " << total << endl;
	return 0;
}
// made all function true non global functions by using passed values instead of globals.
void MultiMatrix(int a[][2], int b[][2])
{
	// no need to declare function-specific array because writing to globals and nothing is returned.
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
