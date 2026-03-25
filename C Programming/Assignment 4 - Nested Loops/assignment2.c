//2. Print prime numbers in the given range 1 to n. 

#include<stdio.h>

void main(){
	
	int number;
	printf("Enter number to find prime number range: ");
	scanf("%d",&number);
	
	printf("Prime number range(1-%d): ",number);
	
	for(int i=2;i<=number;i++){
		int count=0;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				count=1;
			}
		}
		if(count==0){
			printf("%d ",i);
		}
	}
	
}

