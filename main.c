#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int count=0;
	printf("input a string: " );
	scanf("%c", &c);

	while ( (c = getchar()) !='\n') // �Է¹��ڰ� ���๮�ڰ� ���ñ����� �ݺ� 
	{
		
		if ( c>='0' && c<='9' ) //�Էµ� ���ڰ� �����ΰ�?  
		 count = count + 1; //�׷��ٸ� �ϳ��� ����. 
	
	 	
	}
    printf("the number of digits is %i \n", count);
	return 0;
}
