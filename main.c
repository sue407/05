#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum=0;
	int n;
	int a;
	
	printf("input a number : " );
	scanf("%i", &n);

	for (a=0; a<=n; a++)
	 sum = sum + a;
	printf("the result is %i \n", sum);
	 	
	}
   

