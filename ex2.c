#include<stdio.h>
#define PRICE 2000
int main(void) {
	int age;
	int pay;
	printf("���� �Է�: ");
	scanf("%d", &age);
	if (age < 8)
		pay = 0;
	else if (age >= 8 && age < 60)
		pay = PRICE;
	else
		pay = (int)(PRICE * 0.5);
	printf("�����%d", pay);
	return 0;
}