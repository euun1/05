#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	int sum=0;
	
	printf("input a number: \n");
	scanf("%d", &a);
	
	for (int i=1; i<=a; i++)
	{
		sum+=i;
	}
	
	printf("The result is %d\n", sum);
	 
	system("PAUSE");
	return 0;
}
