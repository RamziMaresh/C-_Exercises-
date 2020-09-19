exer04
#RAMZI MARESH AHMED




#include <bits/stdc++.h>
using namespace std;
double m = -pow(10,10); 

double polygonArea(double X[], double Y[], int n){    // declaration of the function 

	double z; 
	for(int i=0;i< n;++i){ // for loop to minimaize the n size 
		z = z+((X[i+1]+X[i]) * (Y[i+1]-Y[i]));	 //formula i
	}
	m = max(m,0.5 * abs(z)); // lagest value
	
	return 0.5 * abs(z);
}

int main()
{
   char choise = 'y';
   double X[20], Y[20];  //define the array with size
   int n, i;
   double z;
   
   	while(choise == 'y'||choise == 'Y'){  //while loop for ask the user 
   	   
	    
	    cout<<"Enter the value of n:"<<endl;  //ask the user to enter value of n size
	    cin>> n;
	
	    cout <<"Enter the vertices of the polygon\n";  // the values of x and y respectively
	    for( i=0;i<n;++i)
        {  
	        cout<<"Enter the vertex "<< i<<":";
	        cin >>X[i]>>Y[i];
        }
    
        X[n-1]=X[0];
        Y[n-1]=Y[0];
	

        z= polygonArea(X,Y,n);   // call the function 
        cout<<"The area of the polygon is:"<< z<< endl;  // showing the area of n 
    
        cout<<"Do you wants to solve for another polygon...?(Y/N)"<< endl;  // ask the user if another enter 
        cin >> choise;
        if(choise == 'n' || choise == 'N') {   // if condition if no another input break 
            break; // which exit from the program and show the last largest value of n
        }
   	}	
   	
    
    
    
    cout<<"The lagest value of area is :"<< m;  
}


