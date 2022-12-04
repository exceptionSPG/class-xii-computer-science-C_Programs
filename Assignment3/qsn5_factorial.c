/***
Author: Shiva Pd. Gyawali
Computer science XII, Sulav Books House
Assignment 3, Question5: factorial of any givern number
*/

#include<stdio.h>
#include<conio.h>

int main(){
	int number, fac=1,temp;
	
	printf("Enter a number to find its factorial:");
	scanf("%d",&number);
	temp = number;
	while(number>0){
		fac*= number;
		number--;
	}
	
	printf("\nFactorial of %d = %d",temp,sum);
	
	getch();
	return 0;
}