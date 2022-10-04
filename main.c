#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


	int answer=47;
	int x;
	int trial=0;
	
	do
	{
		printf("guess a number : ");
		scanf("%i", &x);
		if (x<answer)
		{
		 printf("Low!\n");
		 trial = trial + 1 ;
	}
		else
		{
		 printf("High!\n");
		 trial = trial + 1 ; 
	}
		 
	}
	while (x!=answer);
	
	printf("Congratulation! trial : %i \n", trial);
}
