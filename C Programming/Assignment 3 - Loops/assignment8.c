//8 Check the given number is Strong number or not. 
//	Input: n = 145 
//	Output: Strong

//	Logic : strong : 145 => 1! + 4! + 5! = (1)+(1*2*3*4)+(1*2*3*4*5) = 1+24+120 => 145

#include<stdio.h>

void main(){
	
	int number, sum=0;
	printf("Enter number to check number is strong or not: ");
	scanf("%d",&number);
	int copyNumber = number;
	
	while(copyNumber>0){
		int factorial=1;
		int temp = copyNumber %10;
		for(int j=1; j<=temp; j++){
			factorial = factorial * j;
		}
		sum = sum+factorial;
		copyNumber = copyNumber/10;
	}
	
	if(number==sum){
		printf("Number %d is: Strong number",number);
	}
	else{
		printf("Number %d is: not strong number",number);
	}
	
}

