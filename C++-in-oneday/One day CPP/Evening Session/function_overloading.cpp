#include<iostream>
using namespace std;

int add(int a, float b){ // 2
	cout<<"First function";
	return a + b;
}

float add(float b, int a){ // 2
	return a + b;
}
int main(){
//	cout<<add(2,3);
	cout<<add(2,3.6);

}


