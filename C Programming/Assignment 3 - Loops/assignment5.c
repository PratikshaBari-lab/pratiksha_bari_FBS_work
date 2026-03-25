//Check the given number is Armstrong number or not.. 
//	Input: n = 153 
//	Output: Armstrong 

//	logic : armstrong number : 153 => (1*1*1) + (5*5*5) + (3*3*3) = 1+125+27 => 153 

#include <stdio.h>

void main(){
	
	int number, sum;
	printf("Enter number to check number is armstrong or not: ");
	scanf("%d",&number);
	int numCopy=number;
	
	for(int i=numCopy; i>0; i=numCopy){
		int temp = numCopy%10;
		sum = sum+(temp*temp*temp);
		numCopy = numCopy/10;
	}
	
	if(sum==number){
		printf("Number %d is: armstrong number",number);
	}
	else{
		printf("Number %d is: not armstrong number",number);
	}	
}

