//3 Sum of numbers in given range. 
//	Find sum of numbers from start to end. 
//	Input: start = 1, end = 5 
//	Output: 15 

#include<stdio.h>

void main(){
	
	int start, end, sum=0;
	printf("enter start point: ");
	scanf("%d",&start);
	printf("enter end point: ");
	scanf("%d",&end);
	
	if(start<end){
		for(int i=start;i<=end;i++){
			sum = sum+i;
		}
	}
	else{
		for(int i=end;i<=start;i++){
			sum = sum+i;
		}
	}

	printf(" sum from %d to %d is: %d",start,end,sum);	
	
}
