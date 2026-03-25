//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the 
//	 desired operations. 

#include<stdio.h>

void main(){

	int number1, number2, option;
	printf("Enter number 1: ");
	scanf("%d",&number1);
	printf("Enter number 2: ");
	scanf("%d",&number2);
	printf("\n");
	
	printf("select operation:\n 1.addition\n 2.substraction\n 3.multiplication\n 4.division\n ");
	scanf("%d",&option);
	printf("\n");
	
	if(option==1){
		int sum=number1+number2;
		printf("addition of %d, %d: %d\n",number1, number2, sum);
	}
	else if(option==2){
		int sub=number1-number2;
		printf("substraction of %d, %d: %d\n",number1, number2, sub);
	}
	else if(option==3){
		int multiply=number1*number2;
		printf("multiplication of %d, %d: %d\n",number1, number2, multiply);
	}
	else if(option==4){
		int division=number1/number2;
		printf("division of %d, %d: %d\n",number1, number2, division);
	}
	else{
		printf("Select correct option !!!");
	}
}

