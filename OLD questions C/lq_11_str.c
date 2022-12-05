/***
Author: Shiva Pd. Gyawali
Long Questions, Old is Gold, 9. Write a program to input emp_no, name, and salary of 100 employees using structure. 
Display the name and salary of employee using structure.



*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	struct employee{
		char name[50];
		float salary;
		int emp_no; 
	};
	
	struct employee e[100];
	int i;
	
	//taking input of 100 eployees and storing data
	
	for(i=0;i<100;i++){
		printf("\nEnter Details of [%d] Employee:\n",i+1);
		printf("\nEnter emp no:");
		scanf("%d",&e[i].emp_no);
		printf("Enter Name:");
		scanf("%s",e[i].name);
		printf("\nEnter salary:");
		scanf("%f",&e[i].salary);
	}
	
	//displaying stored data
	printf("\n----------------------------------------------------------------\n\n");
	printf("\nEmployee No.\tName\tSalary\n");
	printf("\n----------------------------------------------------------------\n\n");
	
	for(i=0;i<100;i++){
		printf("\n%d\t%s\t%f\n",e[i].emp_no,e[i].name,e[i].salary);
	}
	
	getch();
	return 0;
}