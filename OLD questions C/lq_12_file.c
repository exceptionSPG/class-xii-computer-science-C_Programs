
/*
Author: Shiva Prasad Gyawali

Old is Gold: 12. write a program to enter name and salary of employee and write it in a file “employee.txt”.

*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	char choice;
	char name[50];
	float salary;
	FILE *ptr;
	ptr = fopen("employee.txt","a");
	if(ptr == NULL){
		printf("\nUnable to open file. Please, try again.");
		exit(1);
		
	}else{
		//file successfully opens.
		do{
			printf("\nEnter name of employee:");
			scanf("%s",&name);
			printf("\nEnter salary of employee:");
			scanf("%f",&salary);
			fprintf(ptr,"%s\t%f\n",name,salary);
			printf("\ndo you want to store more? press y, else n.");
			scanf(" %c",&choice);
			
		}while(choice == 'y' || choice == 'Y');
		
	fclose(ptr);	
	}
	
	getch();
	return 0;
}