//4 Check the given number is prime or not. 
//	Input: n = 7 
//	Output: Prime

//	logic : prime number is divide by 1 & itself

#include <stdio.h>

void main(){
	
	int number;
	printf("Enter number to check prime or not: ");
	scanf("%d",&number);
	
	if(number==0 || number==1){
		printf("Number %d is: not prime",number);
	}
	else if(number ==2){
		printf("Number %d is: prime",number);
	}
	else {
		int count;
		for(int i=2;i<=number/2;i++){
			if(number%i==0){
				count=1;
				break;
			}
		}
		if(count==0){
			printf("Number %d is: prime",number);
		}		
		else{
			printf("Number %d is: not prime",number);
		}
	}
	
	
	
	
}

