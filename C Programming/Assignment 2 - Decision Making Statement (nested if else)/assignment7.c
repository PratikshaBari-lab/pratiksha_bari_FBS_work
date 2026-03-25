//7. Accept the age and check if the person is: 
//	 Child (age < 12),
//	 Teenager (12–19),
//	 Adult (20–59),
//	 Senior (60 and above)

#include<stdio.h>

void main(){
	
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	
	if(age>=0 && age<12){
		printf("as per your age %d you are: Child",age);
	}
	else if(age>=12 && age<=19){
		printf("as per your age %d you are: Teenager",age);
	}
	else if(age>19 && age<=59){
		printf("as per your age %d you are: Adult",age);
	}
	else if(age>59 && age<100){
		printf("as per your age %d you are: Senior",age);
	}
	else if(age>100 && age<120){
		printf("as per your age %d you are: Super Senior",age);
	}
	else{
		printf("please enter correct age !!!");
	}	
	
}

