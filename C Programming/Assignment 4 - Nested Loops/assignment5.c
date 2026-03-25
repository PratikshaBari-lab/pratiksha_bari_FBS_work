//5. Write a menu driven program to take a number for user and perform operations as follows. 
//	Press =>1.To check number is even or odd. 
//			2.To check number is prime or not. 
//			3.To check number is pallindrome or not. 
//			4.To check number is positive, negative or zero. 
//			5.To reverse a number. 
//			6.To find sum of digits.

#include<stdio.h>

void main(){
	
	int option;
		
	printf("Select option:\n");
	printf("1.even or odd \n2.prime number \n3.palindrome \n4.positive, negative, zero");
	printf("\n5.reverse the number \n6.sum of digit \n");
	printf("option: ");
	scanf("%d",&option);
	
	switch(option){
		case 1 :{
			int number;
			printf("\nEnter number to check number is Even or Odd: ");
			scanf("%d",&number);
			if(number%2==0){
				printf("number %d is Even",number);
			}
			else{
				printf("number %d is Odd",number);
			}
			break;
		}
		case 2 :{
			int number, count=0;
			printf("\nEnter number to check number is Prime or not: ");
			scanf("%d",&number);
			for(int i=2;i<=number/2;i++){
				if(number%i==0){
					count=1;
				}
			}
			if(count==1){
				printf("number %d is non-prime number",number);
			}
			else{
				printf("number %d is prime number",number);
			}			
			break;
		}
		case 3 :{
			int number,reverse=0;
			printf("\nEnter number to check number is Palindrome or Not: ");
			scanf("%d",&number);
			int copyNumber=number;
			while(copyNumber>0){
				int temp = copyNumber%10;
				reverse = (reverse*10)+temp;
				copyNumber = copyNumber/10;
			}
			if(number==reverse){
				printf("Number %d is Palindrome ",number);
			}
			else{
				printf("Number %d is Not Palindrome",number);
			}
			break;
		}
		case 4 :{
			int number;
			printf("\nEnter number to check number is Positive,Negative,Zero: ");
			scanf("%d",&number);
			if(number>0){
				printf("Number %d id Positive number",number);
			}
			else if(number<0){
				printf("Number %d is Negative number",number);
			}
			else{
				printf("Number %d is Zero",number);
			}
			break;
		}
		case 5 :{
			int number, reverse=0;
			printf("\nEnter number to Reverse number: ");
			scanf("%d",&number);
			int copyNumber=number;
			while(copyNumber>0){
				int temp = copyNumber%10;
				reverse = (reverse*10)+temp;
				copyNumber = copyNumber/10;
			}
			printf("Number %d is reverse is %d",number,reverse);
			break;
		}
		case 6 :{
			int number, sum=0;
			printf("\nEnter number to check sum of digit: ");
			scanf("%d",&number);
			int copyNumber=number;
			while(copyNumber>0){
				int temp=copyNumber%10;
				sum = sum+temp;
				copyNumber = copyNumber/10;
			}
			printf("Number %d has digitwise addition is %d",number,sum);
			break;
		}
		default :{
			printf("\nInvalid option enter !!!");
		}
	}
}
