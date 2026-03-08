//Calculating total salary based on basic. 
//If basic <=5000 da, ta and hra will be 10%,20% and 25% respectively 
//otherwise da, ta and hra will be 15%,25% and 30% respectively.


#include<stdio.h>

void main(){
	int basic = 1000;
	int da,ta,hra;
	
	if(basic<=5000){
		da = (basic*10)/100;
		ta = (basic*20)/100;
		hra = (basic*25)/100;
	}
	else{
		da = (basic*15)/100;
		ta = (basic*25)/100;
		hra = (basic*30)/100;
	}	
	
	printf("basic : %d\n", basic);
	printf("da: %d, ta:%d, hra: %d\n", da,ta,hra);

}
