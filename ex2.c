#include<stdio.h>
#define PRICE 2000
int main(void) {
	int age;
	int pay;
	printf("나이 입력: ");
	scanf("%d", &age);
	if (age < 8)
		pay = 0;
	else if (age >= 8 && age < 60)
		pay = PRICE;
	else
		pay = (int)(PRICE * 0.5);
	printf("입장료%d", pay);
	return 0;
}