//10 Find Sum of first and last digit of given number. 
//	Input: n = 12345 
//	Output: 6 (1 + 5)

#include <stdio.h>

void main(){
	
	int number, first, last, sum;
	printf("Enter number: ");
	scanf("%d",&number);
	int copyNumber = number;

	last = 	copyNumber%10;	//	Last digit 
	
	while(copyNumber>9){
		copyNumber = copyNumber/10;	
	}	

	first = copyNumber%10;	//	first digit
	
	sum = first+last;		//	addition
	
	printf("Addition of first '%d' and last '%d' digit of number %d is: %d",first,last,number,sum);
}

