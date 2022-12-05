/*
Author: Shiva Pd. Gyawali
13.	Write a program to read the marks of any 5 students
     in a subject and count how many students are passed or failed. (pass marks = 35).
*/

#include<stdio.h>
#include<conio.h>

int main(){
	int marks[5];
	int passCount=0, failCount=0,i;
	
	//taking input marks of 5 students
	printf("\nEnter marks of 5 students [Integer expected.]:");
	for(i=0;i<5;i++){
		scanf("%d",&marks[i]);
	}
	//counting pass and fail student.
	for(i=0;i<5;i++){
		if(marks[i]>=35)
			passCount++;
		else
			failCount++;
		
	}
	
	//displaying counts
	printf("\nPassed student count: %d\nFailed Student Count: %d",passCount,failCount);
	
	getch();
	return 0;
}