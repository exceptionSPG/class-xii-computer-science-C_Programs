/***
Author: Shiva Pd. Gyawali
Class XII Computer Science C Programs Examples, 
Sulav Books House
Assignment 1, Question 1
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	
//	create a variable to store input character.
	char c;
	printf("Enter a character:");
	scanf("%c",&c);
	
//	Checking is it a alpha, character, or special
	if(c>='0' && c<='9'){
		printf("Entered Character is alpha digit.");
		
	}else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
		printf("Entered Character is alpha character.");
		
	}else {
		printf("Entered Character is special character.");
	}
	getch();
	return 0;
}