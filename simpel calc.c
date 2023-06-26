//simple calculator
#include<stdio.h>

float division(float x,float y){
	float div=x/y;
	return div;
}


int main(){
	
	int num1, num2;
	printf("Enter the number one :\n");
	scanf("%i",&num1);
	printf("Enter the number two :\n");
	scanf("%i",&num2);
	
	float div=division(num1,num2);
	printf("The division is :%.1f",div);
	
}


