//2.  Accept three sides of a triangle from the user and determine whether the triangle is 
//	  equilateral, isosceles, or scalene. 

#include<stdio.h>

void main(){

    int side1, side2, side3;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3) {
        printf("Triangle is Equilateral");
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Triangle is Isosceles");
    }
    else {
        printf("Triangle is Scalene");
    }
	
}


