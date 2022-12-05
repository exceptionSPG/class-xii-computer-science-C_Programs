/*
Author: Shiva Prasad Gyawali

Old is Gold: 2. Write a C program to enter name and address of the student and store them in a data file “student.dat”.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	char choice;
	char name[50], address[100];
	FILE *ptr;
	ptr = fopen("student.dat","w");
	if(ptr == NULL){
		printf("\nUnable to open file. Please, try again.");
		exit(1);
		
	}else{
		//file successfully opens.
		do{
			printf("\nEnter name of student:");
			scanf("%s",&name);
			printf("\nEnter address of student:");
			scanf("%s",&address);
			fprintf(ptr,"%s\t%s\n",name,address);
			printf("\ndo you want to store more? press y, else n.");
			scanf(" %c",&choice); //Attention: there is space in " %c", 
			//for the enter from the previous input is taken as input. So add a space before %c.
			
		}while(choice == 'y' || choice == 'Y');
		
	fclose(ptr);	
	}
	
	getch();
	return 0;
}