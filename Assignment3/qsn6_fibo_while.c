/***
Author: Shiva Pd. Gyawali
Computer science XII, Sulav Books House
Assignment 3, Question6: Fibonacci series using while
*/

#include<stdio.h>
#include<conio.h>

int main(){
	int terms = 15;
	int first = 0,second = 1,third=2;
	printf("%d, %d, %d",first,second,third);
	while(terms>0){
		int temp = second+third;
		second = third;
		third = temp;
		printf(", %d",temp);
		terms--;
	}
	
	getch();
	return 0;
}
