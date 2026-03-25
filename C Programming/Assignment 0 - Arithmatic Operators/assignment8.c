//8. Write a C program to input the length and width of a rectangle and find its perimeter. 

#include<stdio.h>

void main(){
	
	int length=20, width=30;
	
	int perimeter = 2*(length+width);
	
	printf("perimeter of %d length and %d width rectangle: %d",length,width,perimeter);
		
}
