/***
Author: Shiva Pd. Gyawali
Class XII Computer Science C Programs Examples, 
Sulav Books House
Assignment 1, Question 5: Marks and percentage
*/
#include<stdio.h>
#include<conio.h>

int main(){
	int marks[7];
	int sum=0;
	float percentage;
	int i;
	int isFail = 0;
	printf("Enter marks of 7 subjects:[integer value expected]");
	for(i=0;i<7;i++){
		scanf("%d",&marks[i]);
		sum+=marks[i];
	}
	percentage = sum*100/700; //Assuming Full marks for 7 subjects = 700
	for(i=0;i<7;i++){
		if(marks[i]<35){
			printf("Result: Failed.");
			isFail = 1;
			break;
		}
	}
	if(!isFail){
		if(percentage>=60){
			printf("Result: First Division.");
		}else if(percentage>=45 && percentage<=59){
			printf("Result: Second Division.");
		}else if(percentage>=35 && percentage <=44){
			printf("Result: Third Division.");
		}else {
			printf("Result: Failed.");
		}
	}
	
	
	getch();
	return 0;
}