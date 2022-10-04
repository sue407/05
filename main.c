#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int count=0;
	printf("input a string: " );
	scanf("%c", &c);

	while ( (c = getchar()) !='\n') // 입력문자가 개행문자가 나올깨까지 반복 
	{
		
		if ( c>='0' && c<='9' ) //입력된 글자가 숫자인가?  
		 count = count + 1; //그렇다면 하나를 센다. 
	
	 	
	}
    printf("the number of digits is %i \n", count);
	return 0;
}
