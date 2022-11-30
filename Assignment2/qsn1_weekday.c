/***
Author: Shiva Pd. Gyawali
Computer science XII, Sulav Books House
Assignment 2, Question1: A program to display the name of the day in a week depending on the number, 
	entered through the keyboard using the switch-case statement.
*/

#include<stdio.h>
#include<conio.h>

int main(){
	int choice;
	
	printf("Enter your choosen number:");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("Sunday");
			break;
		case 2:
			printf("Monday");
			break;
		case 3:
			printf("Tuesday");
			break;
		case 4:
			printf("Wednesday");
			break;
		case 5:
			printf("Thursday");
			break;
		case 6:
			printf("Friday");
			break;
		case 7:
			printf("Saturday");
			break;
		default:
			printf("Invalid Choice.");
			break;
	}
	
	getch();
	return 0;
			
		
			
}