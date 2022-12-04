/***
Author: Shiva Pd. Gyawali
Computer science XII, Sulav Books House
Assignment 3, Question8: armstrong number
*/

#include<stdio.h>
#include<conio.h>

int main(){
	int number,cubeDigit=0;
	printf("Enter a three digit number\nto check whether it is armstrong number or not:");
	scanf("%d",&number);
	int digit;
	int origiNum;
	origiNum = number;

	while(number>0){
		digit=number%10;
		cubeDigit+= (digit*digit*digit);
		number/= 10;
	}
	if(origiNum == cubeDigit){
		printf("\n%d is an Armstrong number.",cubeDigit);
	}else {
		printf("\n%d is not an Armstrong number.",cubeDigit);
	}
	
	getch();
	return 0;
}