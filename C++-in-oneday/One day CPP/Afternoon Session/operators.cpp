#include<iostream>
using namespace std;

int main(){
	int x = 20;
	int y = 20;
	// Arithmetic op
	
	cout<<"Addition = "<<x+y<<endl;
	cout<<x-y<<endl;
	cout<<x/y<<endl;
	cout<<x*y<<endl;
	
	// Relational Op
	// > < >= <=
	if(x != 15){
		cout<<"x is greater than 15";	
	}
	else {
		cout<<"x is not greater than 15";
	}

	// inc / dec
	cout<<++x<<endl; // 20, 21
	cout<<--x<<endl; // 20
	
}
