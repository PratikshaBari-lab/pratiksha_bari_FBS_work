//5. Print an inverted pyramid pattern 
//	Input: n = 5 
//	Output: 	***** 
//				****  
//				***  
//				**  
//				*

#include<stdio.h>

void main(){
	
	int number;
	printf("Enter number to print inverted pyramid pattern: ");
	scanf("%d",&number);
	
	for(int i=1; i<=number; i++){
		for(int j=1; j<=i; j++){
			printf(" ");
		}
		for(int j=i; j<=number; j++){
			printf(" *");
		}
		printf("\n");
	}
	
}


       