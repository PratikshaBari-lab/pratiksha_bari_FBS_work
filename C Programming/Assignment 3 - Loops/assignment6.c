//6 Check the given number is Perfect number or not. 
//	Input: n = 28 
//	Output: Perfect 

//	Logic : perfect number : 28 => 28 divide by 1,2,4,7,14 = 1+2+4+7+14 => 28

#include <stdio.h>

void main(){
	
	int number, sum;
	printf("enter number to check number is perfect or not: ");
	scanf("%d",&number);
	
	for(int i=1;i<number;i++){
		if(number%i==0){
			printf(" %d ",i);
			sum = sum + i;
		}
	}
	
	if(sum==number){
		printf("\nNumber %d is: perfect number",number);
	}
	else{
		printf("\nNumber %d is: not perfect number",number);
	}
	
}

