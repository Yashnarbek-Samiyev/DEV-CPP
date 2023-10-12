#include<iostream>
using namespace std;

int main(){
	int a = 10;
	cout<<a<<endl;
//	cout<<&a; 
	int * px;
	px = &a;
	cout<<px<<endl;
	cout<<*px;
}

