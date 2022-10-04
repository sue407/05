#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int b;
	int a;
	char c;
	printf("계산식을 입력하세요 : " );
	scanf("%i %c %i", &a, &c, &b);

	if (c=='+')
	 printf("%i + %i = %i" ,a, b, a+b);
	 
	else if (c=='-')
	 printf("%i - %i = %i" ,a, b, a-b);
	 	
	else if (c=='*')
	 printf("%i * %i = %i" ,a, b, a*b);
	 
	else 
	 printf("%i / %i = %i" ,a, b, a/b);
	}
   
//  switch(c)
//	{
//  	case '+':
//  		result = a+b;
// 		    break;
//	}
