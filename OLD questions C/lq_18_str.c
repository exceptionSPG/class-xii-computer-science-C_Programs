/***
Author: Shiva Pd. Gyawali
Long Questions, Old is Gold, 9. Write a program to input employee_id, 
   name, address and post of 20 employees and display them properly.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	struct employee{
		char name[50];
		int emp_id; 
		char address[100];
		char post[50];
	};
	
	struct employee e[20];
	int i;
	
	//taking input of 20 eployees and storing data
	
	for(i=0;i<20;i++){
		printf("\nEnter Details of [%d] Employee:\n",i+1);
		printf("\nEnter emp id:");
		scanf("%d",&e[i].emp_id);
		printf("Enter Name:");
		scanf("%s",e[i].name);
		printf("\nEnter address:");
		scanf("%s",&e[i].address);
		printf("\nEnter post:");
		scanf("%s",&e[i].post);
	}
	
	//displaying stored data
	printf("\n----------------------------------------------------------------\n\n");
	printf("\nEmployee ID.\tName\tAddress\tPost\n");
	printf("\n----------------------------------------------------------------\n\n");
	
	for(i=0;i<20;i++){
		printf("\n%d\t%s\t%s\t%s\n",e[i].emp_id,e[i].name,e[i].address,e[i].post);
	}
	
	getch();
	return 0;
}