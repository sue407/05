#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	printf("���� �ϳ��� �Է��Ͻÿ� : " );
	scanf("%i", &a);
	if (a>=0)
	 printf("���밪�� %i �Դϴ�.", a);
	else
	 printf("���밪�� %i �Դϴ�.", -a);
	return 0;
}
