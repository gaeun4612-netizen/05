#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 59;
	int num;
	int trial=0;
	
	do
	{
		printf("Guess a number :");
		scanf("%d", &num);
		
		if (answer<num){
		
		    printf("high!\n");
		    trial+=1;
	    }
		else if (answer>num){
		
		    printf("low!\n");
		    trial+=1;
		}
	}
	while (answer != num);
	
	printf("Congratulation! trials:%d", trial+1);

	
	return 0;
}
