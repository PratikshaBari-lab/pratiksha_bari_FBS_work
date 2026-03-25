//6. Accept a number and check if it is divisible by 3, 5, or both. 
//	(Print "Divisible by 3 but not by 5" 
//		or "Divisible by 5 but not by 3" 
//		or "Divisible by both" 
//		or ”Divisible by None”)

#include<stdio.h>

void main(){
	
	int number;
	printf("Enter number to check: ");
	scanf("%d",&number);
	
	if(number%5==0 && number%3==0){
		printf("Number %d is divided by: 3,5");
	}
	else if(number%3==0){
		printf("Number %d is divided by: 3");
	}
	else if(number%5==0){
		printf("Number %d is divided by: 5");
	}
	else{
		printf("Number %d is not divided by: 3,5");
	}
	
}

