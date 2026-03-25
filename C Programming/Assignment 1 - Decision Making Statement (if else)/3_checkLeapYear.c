//Write a program to check whether a given year is a leap year.

#include<stdio.h>

void main(){
	
	int year = 2026;
	
	if(year%4==0){
		printf("year is leap-year");
	}
	else{
		printf("year is non-leap-year");
	}
	
}
