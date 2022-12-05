/*
Author: Shiva Prasad Gyawali

Long Questions, Old is Gold, 16. Write a program to input length and breadth of a pond and finds its area by using user defined function.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int calculateArea(int length, int breadth);

int main(){
	//assuming length and breadth are expressed in integer.
	//you can use in float as well.
	int length, breadth, area;
	printf("Enter length and breadth of pond:\n");
	printf("Length:");
	scanf("%d",&length);
	
	printf("Breadth:");
	scanf("%d",&breadth);
	
	area = calculateArea(length, breadth);
	printf("Area of pond = %d", area);
	getch();
	return 0;
}

int calculateArea(int length, int breadth){
	return length*breadth;
}