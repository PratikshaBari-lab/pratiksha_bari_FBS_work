//1. Print a solid square pattern 
//	Input: n = 4 
//	Output: 	*  *  *  * 
//				*  *  *  * 
//				*  *  *  * 
//				*  *  *  *

#include<stdio.h>

void main(){
	
	int number;
	printf("Enter number to print solid square pattern: ");
	scanf("%d",&number);
	
	for(int i=1;i<=number;i++){
		for(int j=1;j<=number;j++){
			printf(" * ");
		}
		printf("\n");
	}
	
}

