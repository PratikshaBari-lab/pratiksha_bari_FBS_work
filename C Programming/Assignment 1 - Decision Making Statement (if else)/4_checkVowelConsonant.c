//Write a program to check whether a given character is a vowel or consonant.
//	Vowel : a,e,i,o,u,A,E,I,O,U

#include<stdio.h>

void main(){
	
	char character = 'A';
	
	if(character=='A' || character=='a' || character=='e' || character=='E' || character=='i' || character=='I' || character=='o' || character=='O' || character=='u' || character=='U' )
	{
		printf("Character is vowel : %c",character);	
	}
	else{
		printf("Character is consonant : %c",character);			
	}
	
}