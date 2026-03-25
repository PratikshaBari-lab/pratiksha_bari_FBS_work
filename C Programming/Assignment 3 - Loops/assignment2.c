//2 Print table for given number. 
//Input: n = 5 
//Output: 5 10 15 20 25 30 35 40 45 50

#include<stdio.h>

void main(){
	
	int number;
	printf("Enter number to make table: ");
	scanf("%d",&number);
	
	printf("\ntable for: %d\n",number);
	for(int i=1;i<=10;i++){
		printf(" %d ",number*i);
	}
	
}