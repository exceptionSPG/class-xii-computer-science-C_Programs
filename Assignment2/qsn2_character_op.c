/***
Author: Shiva Pd. Gyawali
Computer science XII, Sulav Books House
Assignment 2, Question2: accepts single character and gives o/p as given
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	char choice;
	printf("Enter choosen Character:");
	scanf("%c",&choice);
	
	switch(choice){
		case 'R':
			printf("Red");
			break;
		case 'r':
			printf("Red");
			break;
		case 'B':
			printf("Blue");
			break;
		case 'b':
			printf("Blue");
			break;
		case 'W':
			printf("White");
			break;
		case 'w':
			printf("White");
			break;
		default:
			printf("No more priority Colour.");
			break;
	}
	
	getch();
	return 0;
}