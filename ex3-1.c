#include<stdio.h>
int main() {
	int esum = 0, osum = 0, stnum, ennum;

	printf("���� ����: ");
	scanf("%d", &stnum);

	printf("�� ����: ");
	scanf("%d", &ennum);

	for (int i = stnum; i <= ennum; i++) {
		if (i % 2 == 0)
			esum += i;
		else
			osum += i;
	}
	printf("¦���� ���� %d�Դϴ�.\n", esum);
	printf("Ȧ���� ���� %d�Դϴ�.\n", osum);
}