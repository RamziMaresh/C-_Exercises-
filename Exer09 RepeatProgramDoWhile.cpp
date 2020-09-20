exer09

#include <iostream>
using namespace std;

int main()
{
	int array[5];
	int n,del;
	char option;
	
	do{
	cout<<"Enter the number of array max=5:";
	cin>> n;
	
	cout<<"Enter the elemnts of array"<<n<<endl;
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	
	cout<<"Showing what you are enterof array :"<< endl;
	for(int i=0;i<n;i++){
		cout<<array[i]<<endl;
	}
	
	cout <<"Enter the element you want to delete:";
	cin>> del;
	
	--del;
	for(int i=del;i<=4;i++){
		array[i]=array[i+1];
	}
	
	cout<<"New array after delation is :"<< endl;
	for(int i=0;i<4;i++){
		cout<< array[i]<<endl;
	}
	
	cout<<"do you want to repeat agrain ..? Y/N";
	cin>> option;
    }while(option=='y'||option=='Y');
}
         
