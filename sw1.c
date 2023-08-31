#include<stdio.h>
int main(void) {
	int n;
	printf("1~3 정수입력");
	scanf("%d", &n);

	switch (n)
	{
	case 1:
		printf("one\n");
		break;
	case 2:
		printf("two\n");
		break;
	case 3:
		printf("three\n");
		break;
	default:
		printf("I don't know! \n");
		break;


	}
}