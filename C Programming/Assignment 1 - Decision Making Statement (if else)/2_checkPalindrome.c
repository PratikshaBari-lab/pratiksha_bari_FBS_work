//Write a program to check given 3 digit number is pallindrome or not.

#include<stdio.h>

void main(){
	
	int number = 121;
	int first = number/100;
	int last = number%10;
	
	if(first == last){
		printf("Number is palindrome : %d",number);
	}
	else{
		printf("Number is not-palindrome : %d",number);
	}
	
	
}
