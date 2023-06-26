//loops
//Enter the marks for two modules of a student and find the average mark.
//Display “Pass” if the average is above 45, otherwise display “Fail”.

#include<stdio.h>
int main(){
	
	float mark;
	printf("Enter the mark :");
	scanf("%f",&mark);
	
	if(mark>=45){
		printf("Your mark is %.2f :\n",mark);
		printf("PASS");
	}else{
		printf("Your mark is %.2f :\n",mark);
		printf("FAIL");
		
	}
}

