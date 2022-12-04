/***
Author: Shiva Pd. Gyawali
Computer science XII, Sulav Books House
Assignment 3, Question7: reverse number input by user
*/

#include<stdio.h>
#include<conio.h>

int main(){
	int number, revNumber=0,originalNumber;
	printf("Enter a number to get its reverse:");
	scanf("%d",&number);
	int digit;
	originalNumber=number;
	while(number>0){
		/*
		Logic is
		*/
		
		digit = number%10;
		revNumber=revNumber*10+digit;
		number = number/10;
		
	}
	printf("\nReversed number of %d is: %d",originalNumber, revNumber);
	
	getch();
	return 0;
}