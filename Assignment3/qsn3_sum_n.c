/***
Author: Shiva Pd. Gyawali
Computer science XII, Sulav Books House
Assignment 3, Question3: sum of first n natural number: while loop
*/

#include<stdio.h>
#include<conio.h>

int main(){
	int n;
	int sum = 0;
	int num;
	printf("Enter a number upto which you want to get sum:");
	scanf("%d",&n);
	num=n;
	while(n>0){
		sum+=n;
		n--;
	}
	
	printf("\nSum upto %d numbers = %d",num,sum);
	
	getch();
	return 0;
}
