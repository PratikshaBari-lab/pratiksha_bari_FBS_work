//Write a program to check whether a given character is uppercase or lowercase.

#include<stdio.h>

void main(){
	
	char character = 'A';
	
	if(character>='A' && character<='Z'){
		printf("Character is Uppercase : %c",character);
	}
	else if(character>='a' && character<='z'){
		printf("Character is Lowercase : %c",character);
	}else{
		printf("There is no character : %c",character);
	}
	
}