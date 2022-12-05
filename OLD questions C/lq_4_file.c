/***
Author: Shiva Pd. Gyawali
Long Questions, Old is Gold, 4.	Write a C program to enter ID, employee_name, and post of the 
employee and store them in a data file named “emp.txt”. Display each record on the screen in an appropriate format


*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	char choice;
	int id;
	char employee_name[50], post[100];
	FILE *ptr;
	ptr = fopen("emp.txt","a");
	if(ptr == NULL){
		printf("\nUnable to open file. Please, try again.");
		exit(1);
		
	}else{
		//file successfully opens.
		do{
			printf("\nEnter employee ID:");
			scanf("%d",&id);
			printf("\nEnter name of employee:");
			scanf("%s",&employee_name);
			printf("\nEnter post of employee:");
			scanf(" %s",&post);
			fprintf(ptr,"%d\t%s\t%s\n",id,employee_name,post);
			printf("\ndo you want to store more? press y, else n.");
			scanf(" %c",&choice); //Attention: there is space in " %c", 
			//for the enter from the previous input is taken as input. So add a space before %c.
			
		}while(choice == 'y' || choice == 'Y');
		
	fclose(ptr);	
	}
	
	//displaying information from file
	ptr = fopen("emp.txt","r");
	if(ptr == NULL){
		printf("\nUnable to open file. Please, try again.");
		exit(1);
		
	}else{
		//file successfully opens.
		char name[100],post[100];
		int emp_id;
		printf("\n-------Employee Details------------\n");
		printf("ID\tName\tPost\n");
		printf("**************************************\n");
		while (fscanf(ptr,"%d\t%s\t%s\n",&emp_id,&name,&post)!= EOF)
        	printf("%d\t%s\t%s\n", emp_id,name,post);
        
		fclose(ptr);	
	}
	
	
	getch();
	return 0;
}