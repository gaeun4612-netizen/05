#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	
	printf("���� �ϳ��� �Է��ϼ��� : ");
	scanf("%d", &x);
	
	if (x < 0)
	  printf("%d\n",-x);
	else
	  printf("%d",x);
  
	return 0;
}
