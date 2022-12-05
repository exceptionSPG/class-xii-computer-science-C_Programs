/***
Author: Shiva Pd. Gyawali
Long Questions, Old is Gold, 30. Write a program to input the 5 employees name and 
    salary using structure and display the records in proper format.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	struct employee{
		char name[50];
		float salary;
	};
	
	struct employee e[5];
	int i;
	
	//taking input of 5 eployees and storing data
	
	for(i=0;i<5;i++){
		printf("\nEnter Details of [%d] Employee:\n",i+1);
		printf("Enter Name:");
		scanf("%s",e[i].name);
		printf("\nEnter salary:");
		scanf("%f",&e[i].salary);
	}
	
	//displaying stored data
	printf("\n-------------------------------------\n\n");
	printf("\nName\tSalary\n");
	printf("\n-------------------------------------\n\n");
	
	for(i=0;i<5;i++){
		printf("\n%s\t%f\n",e[i].name,e[i].salary);
	}
	
	getch();
	return 0;
}