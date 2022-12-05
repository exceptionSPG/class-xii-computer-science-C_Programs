

/***
Author: Shiva Pd. Gyawali
Long Questions, Old is Gold, 15. Write a program to enter the 5 student name, age and sex using structure and display.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	struct student{
		char name[50];
		int age;
		char sex[5]; 
	};
	
	struct student s[5];
	int i;
	
	//taking input of 5 students and storing data
	
	for(i=0;i<5;i++){
		printf("\nEnter Details of [%d] Student:\n",i+1);
		printf("\nEnter Name:");
		scanf("%s",&s[i].name);
		printf("Enter age:");
		scanf("%d",&s[i].age);
		printf("\nEnter sex:");
		scanf("%s",&s[i].sex);
	}
	
	//displaying stored data
	printf("\n----------------------------------------------------------------\n\n");
	printf("\nStudent Name\tAge\tSex\n");
	printf("\n----------------------------------------------------------------\n\n");
	
	for(i=0;i<5;i++){
		printf("\n%s\t%d\t%s\n",s[i].name,s[i].age,s[i].sex);
	}
	
	getch();
	return 0;
}