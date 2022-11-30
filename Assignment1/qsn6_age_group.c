/***
Author: Shiva Pd. Gyawali
Class XII Computer Science C Programs Examples, 
Sulav Books House
Assignment 1, Question 6: Age Group
*/
#include<stdio.h>
#include<conio.h>

int main(){
	int age;
	printf("Enter age:");
	scanf("%d",&age);
	
	if(age>=0 && age<10){
		printf("Age Group is: Child");
	}else if(age>=10 && age<19){
		printf("Age Group is: Teenage");
	}else if(age>=19 && age<40){
		printf("Age Group is: Young");
	}else{	
		printf("Age Group is: Old1");
	
	}
	getch();
	return 0 ;
}