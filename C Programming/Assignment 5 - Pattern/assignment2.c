//2. Print a right-angled triangle pattern 
//	Input: n = 5 
//	Output:		* 
//				** 
//				*** 
//				**** 
//				*****

#include<stdio.h>

void main(){
	
	int number;
	printf("Enter number to print  right-angled triangle pattern: ");
	scanf("%d",&number);
		
	for(int i=1;i<=number;i++){
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	
}


