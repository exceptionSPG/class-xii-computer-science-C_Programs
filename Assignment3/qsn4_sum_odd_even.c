/***
Author: Shiva Pd. Gyawali
Computer science XII, Sulav Books House
Assignment 3, Question4: sum of odd and even number: while loop
*/

#include<stdio.h>
#include<conio.h>

int main(){
	int numTerms, sumOdd=0, sumEven=0;
	
	printf("Enter number upto which you want odd and even sum:");
	scanf("%d",&numTerms);
	
	while(numTerms>0){
		if(numTerms%2==0){
			sumEven+=numTerms;
		}else{
			sumOdd+=numTerms;
		}
		numTerms--;
	}
	
	printf("\nSum of even terms: %d\nSum of odd terms: %d\n",sumEven,sumOdd);
	getch();
	return 0;
}