#include<stdio.h>
int main()
{
	//for 기본문법
	int i, sum=0;
	for (i = 1; i <= 10; i++) {
		sum = sum + i;
		printf("%d", sum);
	}
	printf("\n최종합계:%d\n", sum);

}