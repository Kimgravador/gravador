#include <iostream>
using namespace std;


int main(){

	int x,y,z;
	cout<<"Enter a 1 number: ";
	cin>>x;
	cout<<"Enter a 2 number: ";
	cin>>y;
	cout<<"Enter a 3 number: ";
	cin>>z;
	if (x>=y&&x>=z){
 		cout<<"\nThe Largest number[ "<<x<<","<<y<<","<<z<<"] is::"<<x<<"\n";
	}
	
	if (y>=x&&y>=z){	
		cout<<"\nThe Largest number[ "<<x<<","<<y<<","<<z<<"] is::"<<y<<"\n";
    } 
    
	if (z>=x&&z>=y)	{
		cout<<"\nThe Largest number[ "<<x<<","<<y<<","<<z<<"] is::"<<z<<"\n";
	}
	
}
