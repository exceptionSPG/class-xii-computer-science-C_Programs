/***
Author: Shiva Pd. Gyawali
Class XII Computer Science C Programs Examples, 
Sulav Books House
Assignment 1, Question 2
*/
#include<stdio.h>
#include<conio.h>

int main(){
	int a,b,c;
	int max=0;
	printf("Enter three numbers to compare:");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b && a>c){
		max=a;
	}else if(b>c){
		max = b;
	}else {
		max = c;
	}
	printf("Maximum number is: %d",max);
	
	getch();
	return 0;
}