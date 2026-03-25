//8. Print a pattern of stars in diamond shape 
//	Input: n = 4 
//	Output: 	* 
//				** 
//				*** 
//				**** 
//				*** 
//				** 
//				*

#include<stdio.h>

void main(){
	
	int number;
	printf("Enter number to print star diamond pattern: ");
	scanf("%d",&number);
	
	for(int i=1;i<number;i++){
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=number;i>=1;i--){
		for(int j=i;j>=1;j--){
			printf("*");
		}
		printf("\n");
	}
	
}

