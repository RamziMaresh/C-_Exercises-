exer10

#include <iostream>
using namespace std;  
int main()  
{  
  int n, i, m=0, flag=0;  
  
  cout<< "Enter the Number to check Prime: ";  
  cin >> n;  
  m=n/2;  
  for(i = 2; i <= m; i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<"Number is not Prime."<<endl;  
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  
      cout << "Number is Prime."<<endl;  
  return 0;  
}

/* another solve with function */
int main() 
{
  int num;
  num = get_valid_number();
  while (num != 0) {
    cout << "The number " << num << " is ";
    if (!small_prime(num))
      cout << "not ";
    cout << "a prime between 1 and 1000.\n\n";
    num = get_valid_number();
  } 
         
  return 0;
}

int get_valid_number() 
{
  int num;
  do {
    cout << "Enter an integer between 1 and 1000 (incl) (or 0 to end program): ";		
    cin >> num;
    if (num < 0 || num > 1000)
      cout << "number out of range, try again!" << endl;
  } while (num < 0 || num > 1000);

  return number;
}

/* FUNCTION TO EVALUATE IF THE ARGUMENT IS A PRIME BETWEEN 1 AND 1000 */
Logical small_prime(int integer)
{
  for (int i = 2; i<integer; i++) {
    if ((integer % i) == 0) 
      return False;
  }
  return True;
}
      
