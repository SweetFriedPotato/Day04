#include<stdio.h>
int main() {
	int score;

	printf("���� �Է�: ");
	scanf("%d", &score);

	if (score >= 0 && score >= 100)
		if (score >= 70)
			printf("pass\n");
		else
			printf("fail\n");
	else
		printf("�߸��� �������Դϴ�.\n");
	return 0;

}