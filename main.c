#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c;
	int num=0;
	
	printf("문자열을 입력하세요: ");
	scanf("%c", &c);
	
	while ((c=getchar())!='\n')
	{
		if(c>='0' && c<='9')
		{
			num++;
		}
	}
	
	printf("the number of digits is %d\n", num);
	 
	system("PAUSE");
	return 0;
}
