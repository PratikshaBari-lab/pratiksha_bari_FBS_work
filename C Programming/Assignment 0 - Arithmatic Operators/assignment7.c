//7. Write a C program to convert given minutes into hours and remaining minutes. 

#include<stdio.h>

void main(){
	
	int minute=122;
	
		int hour = minute/60;
		int remainingMinute = minute%60;	
	
		printf("HH:MM %d:%d",hour,remainingMinute);	
	
}

