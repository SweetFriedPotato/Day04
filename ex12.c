#include<stdio.h>
int main(void) {
	int cnt = 0, input;
	while (1) {
		printf("�н������Է�(����):");
		scanf("%d", &input);
		if (input == 2020)
		{
			printf("�н����� ��ġ\n");
			return;
		}
		cnt++;
		if (cnt == 5)
			break;
	}
	printf("%dȸ ����: 30���Ŀ� �ٽ� ����\n", cnt);
	return 0;
}