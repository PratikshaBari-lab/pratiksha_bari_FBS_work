//	 Print a hollow square pattern 
//		Input: n = 4 
//		Output: 	* * * * 
//					*     *
//					*     *
//					* * * *

#include<stdio.h>

void main(){

	int number;
	printf("Enter number to print  hollow square pattern: ");
	scanf("%d",&number);
	
	for(int i=1;i<=number;i++){
		for(int j=1;j<=number;j++){
			if(i==1 || i==number || j==1 || j==number){
				printf(" *");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
	
}

