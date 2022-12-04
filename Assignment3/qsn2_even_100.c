/***
Author: Shiva Pd. Gyawali
Computer science XII, Sulav Books House
Assignment 3, Question2: print even number upto 100
*/

#include<stdio.h>
#include<conio.h>

int main(){
	int i = 0;
	for(i=0;i<=100;i++){
		if(i%2==0){
			printf("%d\n",i);
		}
		
	}
	
	getch();
	return 0;
}

