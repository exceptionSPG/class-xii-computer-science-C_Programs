//
/***
Author: Shiva Pd. Gyawali
Long Questions, Old is Gold, 11. Write a program to find out given number is negative or positive using function.

*/

#include<stdio.h>
#include<conio.h>

void NegativeOrPositive(int a);

int main(){
	int number;
	printf("Enter a number \nto check whether it is positive or negative:");
	scanf("%d",&number);
	
	NegativeOrPositive(number);
	
	getch();
	return 0;
}

void NegativeOrPositive(int number){
	if(number>0){
		printf("\n%d is Positive Number.",number);
	}else {
		printf("\n%d is Negative Number.",number);
	}
}