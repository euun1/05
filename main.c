#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b,result;
	char o;
	
	printf("enter the caltulation : ");
	scanf("%d %c %d", &a, &o, &b);
	
	switch (o) 
	{
	case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
	}

    printf("= %d\n", result);
	
	 
	system("PAUSE");
	return 0;
}
