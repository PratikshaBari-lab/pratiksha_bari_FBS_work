//3. Print perfect numbers in the given range 1 to n. 

//	Logic : perfect number : 28 => 28 divide by 1,2,4,7,14 = 1+2+4+7+14 => 28

#include <stdio.h>

void main(){
	
	int number;
	printf("Enter number to find perfect number range: ");
	scanf("%d",&number);
	
	printf("Perfect number range(1-%d): ",number);

	for(int i=1;i<=number;i++){
		int sum=0;
		for(int j=1;j<i;j++){
			if(i%j==0){
				sum = sum+j;
//			printf(" %d ",j);		//	check loop logic: division (j) values
			}
		}
//		printf(" |sum=%d,i=%d|\n ",sum,i);		//	check loop logic
		if(sum==i){
			printf("%d ",i);
		}
	}
	
}
