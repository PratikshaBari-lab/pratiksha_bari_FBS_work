//5. Write a C program to input five numbers and find their average. 

#include<stdio.h>

void main(){
	
	int num1=10, num2=20, num3=30, num4=40, num5=50;
	
	int sum = num1+num2+num3+num4+num5;
	int average = sum/5;
	
	printf("average of %d,%d,%d,%d,%d : %d",num1,num2,num3,num4,num5,average);
	
	
}
