/***
Author: Shiva Pd. Gyawali
Computer science XII, Sulav Books House
Assignment 2, Question3: menu driven program
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	int n1,n2;
	int choice;
	int isContinue = 1;
	
	do{
		printf("\nWelcome to Menu Driven Calculator\n1. Addition\n2. Subtraction\n3. Product\n4. Division\n5. Modulus Division\n6. Exit\n");
		printf("Enter menu number of your choice:\n");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				//Addition
				printf("Enter two numbers to add:");
				scanf("%d %d",&n1,&n2);
				printf("%d + %d = %d",n1,n2,n1+n2);
				break;
			case 2:
				//Subtraction
				printf("Enter two numbers to Subtract:");
				scanf("%d %d",&n1,&n2);
				printf("%d - %d = %d",n1,n2,n1-n2);
				break;
			case 3:
				//Product
				printf("Enter two numbers to multiply:");
				scanf("%d %d",&n1,&n2);
				printf("%d * %d = %d",n1,n2,n1*n2);
				break;
			case 4:
				//Division
				printf("Enter two numbers to divide [quotient]:");
				scanf("%d %d",&n1,&n2);
				float div = n1/(float)n2; //integer numbers divide garda integer dinxa so.
				printf("%d and %d = %f",n1,n2,div);
				break;
			case 5:
				//modulus division
				printf("Enter two numbers for modulus division:");
				scanf("%d %d",&n1,&n2);
				printf("%d mod %d = %d",n1,n2,n1%n2);
				break;
			case 6:
				isContinue = 0;
				break;
			default:
				printf("choose a valid option.");
				break;
		}
		
	}while(isContinue);
	
	getch();
	return 0;
}