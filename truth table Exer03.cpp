	
#include <iostream>
using namespace std;
int main() 
{
	int r,s,t, x =1;
	while(x){
	
	cout <<"Row "<<x<<endl;
	cout <<"Enter the value of r : ";
	cin >> r;
	if(r!= 0 && r!= 1){
		cout<<"Wrong input , please enter 0 or 1 !";
		break;
	}
	cout <<"Enter the value of s : ";
	cin >> s;
	if(s!= 0 && s!= 1){
		cout<<"Wrong input  , please enter 0 or 1 !";
		break;
	}
	cout <<"Enter the value of t : ";
	cin >> t;
	if(t != 0 && t!= 1){
		cout<<"Wrong input  , please enter 0 or 1 !";
	   break;
	}
	bool res;
	res = !(r || s);
	cout <<"Result of truth value expression \nDe morgan's law program : ";
	cout <<"!(r || s) == !r && !s ----> <"<<res<<" == "<<res<<">"<<endl;
	res = (r && s) || !t;
	cout <<"(r && s) || !t = " <<res<<endl;
	res = !(r && (s || !t));
	cout<<"!(r && (s || !t)) = " <<res<<endl;
	 x++;
	}
	return 0 ;
	
	
}
