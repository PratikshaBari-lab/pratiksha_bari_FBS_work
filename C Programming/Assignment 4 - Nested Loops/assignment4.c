//4. Print strong numbers in the given range 1 to n. 

//	Logic : strong : 145 => 1! + 4! + 5! = (1)+(1*2*3*4)+(1*2*3*4*5) = 1+24+120 => 145

#include<stdio.h>

void main(){
	
	int number;
	printf("Enter number to find strong number series: ");
	scanf("%d",&number);
	
	printf("Strong number series(1-%d): ",number);
	
	for(int i=1; i<=number; i++){
		int sum=0;
		int copyNumber = i;
		while(copyNumber>0){
			int factorial=1;
			int temp = copyNumber%10;
			for(int k=1;k<=temp;k++){
				factorial = factorial*k;
			}
			sum = sum+factorial;
			copyNumber = copyNumber/10;
		}
		if(sum == i){
			printf("%d ",i);
		}
	}
	
}
