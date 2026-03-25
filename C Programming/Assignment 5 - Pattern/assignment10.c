//10. Print a hollow square with diagonal pattern 
//	Input: n = 5 
//	Output: 	* * * * * 
//				* *     *  
//				*   *   *
//				*     * * 
//				* * * * *

#include<stdio.h>

void main(){
	
	int number;
	printf("Enter number to print  hollow square pattern: ");
	scanf("%d",&number);

	for(int i=1; i<=number; i++){
		for(int j=1;j<=number;j++){
			if(i==1 || i==number || j==1 || j==number || j==i){
				printf(" *");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}	
	
}

