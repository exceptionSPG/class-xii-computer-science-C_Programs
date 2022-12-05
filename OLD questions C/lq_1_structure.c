/***
Author: Shiva Pd. Gyawali

Long Questions, Old is Gold, 1.	Write a C program to enter name, grade, age and address of 10 students in structure and display the information.
*/

#include<stdio.h>
#include<conio.h>

int main(){
	struct students{
		char name[50];
		float grade;
		int age;
		char address[100];
	};
	
	struct students s[10];
	int i;
	
	//taking input of 10 students and storing data
	for(i=0;i<10;i++){
		printf("\nEnter name of [%d] student:",i+1);
		scanf("%s",s[i].name);
		printf("\nEnter grade of [%d] student:",i+1);
		scanf("%f",&s[i].grade);
		printf("\nEnter age of [%d] student:",i+1);
		scanf("%d",&s[i].age);
		printf("\nEnter address of [%d] student:",i+1);
		scanf("%s",s[i].address);
	}
	
	//displaying stored data
	printf("\n------------------------------------------------------------------------------------------\n\n");
	printf("\nS.N\tName\tGrade\tAge\tAddress\n");
	printf("\n------------------------------------------------------------------------------------------\n\n");
	
	for(i=0;i<10;i++){
		printf("\n%d\t%s\t%f\t%d\t%s\n",i+1,s[i].name,s[i].grade,s[i].age,s[i].address);
	}
	
	getch();
	return 0;
}