//7 Find factorial of given number. 
//	Input: n = 5 
//	Output: 120

//	Logic : factorial : 5 => 1*2*3*4*5 => 120

#include <stdio.h>

void main(){
	
	int number, factorial=1;
	printf("Enter number to find factorial: ");
	scanf("%d",&number);
	
	for(int i=1; i<=number; i++){
		factorial = factorial * i;
	}
	
	printf("Factorial of number %d is: %d",number,factorial);
}

