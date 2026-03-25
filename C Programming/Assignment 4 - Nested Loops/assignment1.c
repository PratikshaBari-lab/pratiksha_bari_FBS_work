//1. Print armstrong numbers in the given range 1 to n. 

//	logic : armstrong number : 153 => (1*1*1) + (5*5*5) + (3*3*3) = 1+125+27 => 153 

#include<stdio.h>

void main(){
	
	int number;
	printf("Enter number to find armstrong number from given range: ");
	scanf("%d",&number);
	
	printf("\nArmstrong number (1-%d): ",number);
	for(int i=1; i<=number; i++){
		int sum=0;
		int copyNumber = i;
		while(copyNumber>0){
			int temp = copyNumber%10;
			sum = sum + (temp*temp*temp);
			copyNumber = copyNumber/10;
		}
//		printf(" |%d=%d| ",sum,i);		//	Check Loop Working
		if(sum==i){
			printf("%d ",i);
		}
	}
	
}

