//4. Ask the user to enter marks. 
//	 Then show the result based on these rules: 
//		If marks are more than 75 ? show "Distinction" 
//		If marks are more than 65 ? show "First Class" 
//		If marks are more than 55 ? show "Second Class" 
//		If marks are 40 or more ? show "Pass Class" 
//		If marks are less than 40 ? show "Fail"

#include<stdio.h>

void main(){
	
	int mark;
	printf("Enter student mark: ");
	scanf("%d",&mark);
	
	if(mark>=75 && mark<=100){
		printf("Student result with %d mark : Distinction ",mark);	
	}
	else if(mark<75 && mark>=65){
		printf("Student result with %d mark : First Class ",mark);	
	}
	else if(mark<65 && mark>=55){
		printf("Student result with %d mark : Second Class ",mark);	
	}
	else if(mark<55 && mark>=40){
		printf("Student result with %d mark : Pass Class ",mark);	
	}
	else if(mark<40 && mark>=0){
		printf("Student result with %d mark : Fail ",mark);	
	}
	else{
		printf("Something went wrong");	
	}


}

