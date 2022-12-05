 
 /***
Author: Shiva Pd. Gyawali
Long Questions, Old is Gold, 3.	 Write a program to input roll, name and age of 5 students and display them properly using structure.

*/

#include<stdio.h>
#include<conio.h>

int main(){
	struct students{
		char name[50];
		int age;
		int roll; 
	};
	
	struct students s[5];
	int i;
	
	//taking input of 5 students and storing data
	
	for(i=0;i<5;i++){
		printf("\nEnter Details of [%d] student:\n",i+1);
		printf("\nEnter roll:");
		scanf("%d",&s[i].roll);
		printf("Enter Name:");
		scanf("%s",s[i].name);
		printf("\nEnter age:");
		scanf("%d",&s[i].age);
	}
	
	//displaying stored data
	printf("\n---------------------------------------------------------------------------------\n\n");
	printf("\nRoll No.\tName\tAge\n");
	printf("\n---------------------------------------------------------------------------------\n\n");
	
	for(i=0;i<5;i++){
		printf("\n%d\t%s\t%d\n",s[i].roll,s[i].name,s[i].age);
	}
	
	getch();
	return 0;
}