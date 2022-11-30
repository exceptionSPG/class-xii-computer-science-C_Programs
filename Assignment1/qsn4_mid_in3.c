/***
Author: Shiva Pd. Gyawali
Class XII Computer Science C Programs Examples, 
Sulav Books House
Assignment 1, Question 4: find middle of three
*/

#include<stdio.h>
#include<conio.h>

int main(){
	int a,b,c;
	int mid;
	printf("Enter any three numbers:");
	scanf("%d %d %d",&a, &b, &c);
	
	if((a>b && a<c)||(a>c && a<b)){
		mid = a;
	}else if((b>a && b<c)||(b>c && b<a)){
		mid = b;
	}else {
		mid = c;
	}
	printf("Middle number is: %d",mid);
	getch();
	return 0;
}