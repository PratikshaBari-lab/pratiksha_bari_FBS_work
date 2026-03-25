//3. Write a program to find greatest of three numbers using nested if-else.

#include<stdio.h>

void main(){
	
	int number1, number2, number3;
	printf("Enter three numbers (number1, number2, number3): ");
	scanf("%d %d %d",&number1, &number2, &number3);
	
	if(number1>number2){
		if(number1>number3){
			printf("number %d is greater than %d, %d",number1, number2, number3);
		}
	}
	else{
		if(number2>number3){
			printf("number %d is greater than %d, %d",number2, number1, number3);
		}
		else{
			printf("number %d is greater than %d, %d",number3, number1, number2);			
		}
	}
	
	
	
}

