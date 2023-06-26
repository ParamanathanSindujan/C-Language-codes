//small program for scanf

#include<stdio.h>

float avgfun(float z,float y){
	float avg=(z+y)/2;
	return avg;
}

float sumfun(float a,float b){
	float sum=a+b;
	return sum;
}

int main(){
	
	float mark1,mark2;
	
	printf("Enter the mark 1 :");
	scanf("%f",&mark1);
	printf("Enter the mark 2 :");
	scanf("%f",&mark2);
	
	printf("Entered mark1 is : %.1f\n",mark1);
	printf("Entered mark2 is : %.1f\n",mark2);
	
	
	float s=sumfun(mark1,mark2);
	printf("Sum is :%.1f\n",s);
	
	float avg=avgfun(mark1,mark2);
	printf("The avg is :%.2f",avg);
	
	
}
