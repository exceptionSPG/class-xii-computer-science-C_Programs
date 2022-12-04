/***
Author: Shiva Pd. Gyawali
Computer science XII, Sulav Books House
Assignment 3, Question8: armstrong number
*/

#include<stdio.h>
#include<conio.h>

int main(){
	int number,cubeDigit=0;
//	printf("Enter a three digit number\nto check whether it is armstrong number or not:");
//	scanf("%d",&number);
	int digit;
//	int origiNum;
//	origiNum = number;
	for(int i=100;i<1000;i++){
		int temp = i;
		while(temp>0){
			digit=temp%10;
			cubeDigit = cubeDigit*10+(digit*digit*digit);
			temp/= 10;
		}
		if(i == cubeDigit){
			printf("\n%d is an Armstrong number.",cubeDigit);
		}
	}
	
	
	getch();
	return 0;
}