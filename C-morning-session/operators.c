#include<stdio.h>
int main(){
	//Arithmetic Operators +,-,=
	int a=20;
	int b=10;

	printf("%d \n",(a+b));
	
	//Relational Operators
	
	 printf("%d \n",(a>b));
	 
	//Logical Operators
	const char* result=(a==b) ? ("true") : ("False");
    printf("%s \n",result);
	 
	 
//	  Increment/Decrement Operators
       int n=0;
       n++; 
       printf("%d \n",n);
       
       
	
}