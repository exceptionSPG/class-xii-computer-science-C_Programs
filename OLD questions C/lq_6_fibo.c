//

/***
Author: Shiva Pd. Gyawali
Old is Gold 3, Question6: Fibonacci series of 6,12,18,30… upto 10 terms using loop
*/

#include<stdio.h>
#include<conio.h>

int main(){
	int terms = 10;
	int first = 6,second = 12,third=18;
	printf("Generated Fibonacci series is:\n");
	printf("%d, %d, %d",first,second,third);
	while(terms>0){
		int temp = second+third;
		second = third;
		third = temp;
		printf(", %d",temp);
		terms--;
	}
	
	getch();
	return 0;
}
