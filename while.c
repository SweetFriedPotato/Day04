#include<stdio.h>
int main() {
	//����: 1~10���� ���

	//while��
	int i = 10;//�ʱ�ȭ
	while (i >= 1) {
		printf("%d", i);
		i = i - 1;
	}
	printf("%d", i);
	//do~while
	i = 1;
	do {
		printf(" %d", i);
		i++;
	} while (i <= 10);//�����ݷ� �� ���̱�
}