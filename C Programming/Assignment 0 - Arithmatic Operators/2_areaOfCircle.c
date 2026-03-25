//Write a C program to find the area of a circle.


#include<stdio.h>

void main(){
	
	float radius = 20;
	float pi = 3.14;
	
	float areaOfCircle = pi * radius * radius;
	
	printf("radius: %f, area of circle: %f",radius,areaOfCircle);
	
}