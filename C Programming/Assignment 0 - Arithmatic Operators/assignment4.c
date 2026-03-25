//4. Write a C program to swap two numbers using a temporary third variable. 

#include<stdio.h>

void main(){
	
	int number1=10, number2=20;
	printf("number 1:%d, number 2:%d\n",number1,number2);
	
	int temp = number1;
	number1 = number2;
	number2 = temp;
	
	printf("number 1:%d, number 2:%d",number1,number2);
	
}
