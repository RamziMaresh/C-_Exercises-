/*Create an array that can hold ten integers, and get input from user.
Display those values on the screen, and then prompt the user for an integer.
Search through the array, and count the number of times the item is found.*/


#include <iostream>
using namespace std;

int count(const int arr1[10], int numb){
 int cont=0;
   
   for (int u=0; u<10; u++){

    if (arr1[u]==numb)
     cont=cont+1;
   }
 return cont;
 }

int main(){   

    int arr[10];int num;
    cout<<"Enter 10 values in array:";

    for(int i = 0; i < 10; i++)
      cin >> arr[i];

    cout << "Values in array are now:";

    for(int i = 0; i < 10; i++)
      cout << " " << arr[i];

    cout<<"\n"<< "Enter value to find";
    cin >> num;

	cout<< num<< " was found " << count(arr,num);


	return 0;
}
