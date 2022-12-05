/*
Author: Shiva Prasad Gyawali
Old is Gold: 14. write a program to find out factorial of a given number using function.
*/

#include<stdio.h>
#include<conio.h>

int myFactorialCalculator(int number);

int main(){
	int number, result;
	printf("Enter a number to calculate its factorial:\n");
	scanf("%d",&number);
	result = myFactorialCalculator(number);
	printf("\nFactorial of %d = %d",number,result);
	
	getch();
	return 0;
}

int myFactorialCalculator(int number){
	int sum=1;
	while(number!=0){
		sum*= number;
		number--;
	}
	return sum;
}