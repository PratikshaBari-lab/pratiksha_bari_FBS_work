//3. Print an inverted right-angled triangle pattern 
//	Input: n = 5 
//	Output: 	***** 
//				**** 
//				*** 
//				** 
//				*

#include<stdio.h>

void main(){
	
	int number;
	printf("Enter number to print inverted right-angled triangle pattern: ");
	scanf("%d",&number);
	
	for(int i=number;i>0;i--){
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	
}

