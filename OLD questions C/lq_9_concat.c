/***
Author: Shiva Pd. Gyawali
Old is Gold 3, Question 8.Write a program to concatenate two strings
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	char str1[50],str2[50];
	
	printf("Enter first string:");
	scanf("%s",str1);
	printf("\nEnter second string:");
	scanf("%s",str2);
	strcat(str1,str2);
	printf("\nConcatenated String is: %s",str1);
	
	getch();
	return 0;
	
}