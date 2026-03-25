//10. Write a C program to input marks of five subjects, find the total marks, and calculate 
//	  the percentage.

#include<stdio.h>

void main(){
	
	int math=98, science=95, history=80, geography=85, language=92;
	
	int sum= math+ science+ history+ geography+ language;
	int percentage = sum/5;
	
	printf("| Math | Science | History | Geography | Language | Total | Percentage |\n");
	printf("| %d   |   %d    |   %d    |    %d     |    %d    |  %d  |   %d %%     |",math,science,history,geography,language,sum,percentage);
	
	
}

