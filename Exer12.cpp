/*Write a C++ program that prompt the user (in the main function) to enter the spring force in F
(Newton) and the spring constant k. The two information will need to be passed to a function
in order to calculate the displacement x of the spring from its equilibrium position. The function
will then return the result to the main function to be displayed.
	
The program should also provide input validation for spring force F and spring constant k by
making sure only positive values are entered. If negative values are entered, the program
should repeat the prompt until the valid values are entered.

The program should also be capable of repeatedly prompt the user for a new set of values (for
F and k) after the result of the previous values have been calculated and displayed. However,
the user can have the option to stop and exit the program when the user enters -999 when
prompted with spring force F*/

#include<iostream>
using namespace std;
int main(){
double F, k;
int controller;
bool flag = true;

 do{
  do{
 cout<<"Please input F(positive number only) or enter -999 to exit...:";
 cin >>F;
 
 if (F == -999)
 {
 flag = !flag;
 }
 cout <<endl;
 }while(F < 0 && F != -999);
 if(flag){
do{
 cout<<"Please input K(positive numberonly) : "; 
 cin >>k; 
 cout <<endl;
}while(k < 0); 
 double x = -(-(F) / k);
 cout<<x;
 
 cout<<"The spring is displaced by: " <<showpoint <<x*100 <<"cm" <<endl<<endl;
 }
 
 }while(flag);
 }
