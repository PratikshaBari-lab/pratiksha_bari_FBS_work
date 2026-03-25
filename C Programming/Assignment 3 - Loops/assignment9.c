//9 Check the given number is Palindrome number or not. 
//	Input: n = 121 
//	Output: Palindrome 

#include <stdio.h>

void main(){

	int number, reverse;
	printf("Enter number to check palindrome or not: ");
	scanf("%d",&number);
	int copyNumber = number;
	
	while(copyNumber>0){
		int temp = copyNumber % 10;
		reverse = reverse*10 + temp;
		copyNumber = copyNumber/10;
	}
	
	if(reverse == number){
		printf("Number %d is: Palindrome",number);
	}
	else{
		printf("Number %d is: not palindrome",number);
	}
		
}

