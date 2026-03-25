//4. pyramid pattern 
//	Input: n = 5 
//	Output:		    * 
//				   * * 
//				  * * * 
//			 	 * * * * 
//				* * * * *

#include<stdio.h>

void main(){
	
	int number;
	printf("Enter number to print pyramid pattern: ");
	scanf("%d",&number);
	
	for(int i=1;i<=number;i++){
		for(int j=i;j<=number;j++){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
			printf(" *");
		}
		printf("\n");
	}
	
}

