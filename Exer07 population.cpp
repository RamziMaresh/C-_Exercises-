exer07
// Ramzi Maresh Ahmed

#include <iostream> // standred library
#include <iomanip>
#include <cmath>
using namespace std ;
 
void bar_char (double[],int);  //  decleration function
int main ()
 {
 	int const size = 6 ; // array for size
 	double test[size]; 
 	
 	int average ; 
 	int sum = 0.0 ;
 	bar_char (test,size);
 	
 	for (int index = 0 ; index <= size ; index++)  
 	{
 		sum = sum + test[index];
	}
	 average = sum / size ;
	 cout <<"The average populations for 6 cities is "<<average<<endl ;
	 
	 cout<<"POPULATION (each # represents 10,000 people)"<<endl;
	 
	 for(int i=0;i<6;i++)    // output array content by cell
	 {
	 	int n = (test[i]/10000);
	 	
	 	cout<<"City "<<i+1<<" : ";
	 	
	 	for(int j=0;j<n;j++)
	 	{
	 		cout<<" # ";
	 		
		 }
		 cout<<endl;
	 }
	
return 0;
 }
  void bar_char (double test[],int c) // function header 
  {
  	
  	// c= 10;
  	for (int index = 0  ; index<c  ; index++)
  	{
  	cout <<"Enter the population for city " << index+1 <<":" ;	
  		cin >> test[index];
   
	  }
  	return ;
  }
