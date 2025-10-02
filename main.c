#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char a;
	int x,y;
	int result;
	
	printf("enter the calculation : ");
	scanf("%i %c %i", &x, &a, &y);
	
	switch(a){
		case'+':
		  result=x+y;
		  break;
		  
		case'-':
		  result=x-y;
		  break;
		  
		case'*':
		  result=x*y;
		  break;
		  
		case'/':
		  result=x/y;
		  break;
	}
	printf ("%d",result);
	  
	return 0;
}
