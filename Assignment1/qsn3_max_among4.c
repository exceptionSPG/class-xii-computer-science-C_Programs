/***
Author: Shiva Pd. Gyawali
Class XII Computer Science C Programs Examples, 
Sulav Books House
Assignment 1, Question 3: largest number among 4 numbers
*/
#include<stdio.h>
#include<conio.h>

int main(){
	int a,b,c,d;
	int max = 0;
	
	printf("Enter 4 numbers to compare:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	if(b>a && b>c && b>d){
		max=b;
	}else if(c>a && c>d){
		max=c;
	}else if(d>a){
		max=d;
	}else{
		max=a;
	}
	printf("Largest Number is: %d",max);
	
	getch();
	return 0;
}