#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=59;
	int input;
	int n=0;
	
	do
	{
		printf("Guess a number: ");
		scanf("%d", &input);
		n++;
		
		if (input < answer)
		{
			printf("low!\n");
		}
		else if (input > answer)
		{
			printf("high!\n");
		}
		else
		{
			printf("Congratulation! trials: %d\n", n);
		}
	} while ( input != answer);
	 
	system("PAUSE");
	return 0;
}
