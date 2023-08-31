#include<stdio.h>
int main() {
	int esum = 0, osum = 0, stnum, ennum;

	printf("시작 숫자: ");
	scanf("%d", &stnum);

	printf("끝 숫자: ");
	scanf("%d", &ennum);

	for (int i = stnum; i <= ennum; i++) {
		if (i % 2 == 0)
			esum += i;
		else
			osum += i;
	}
	printf("짝수의 합은 %d입니다.\n", esum);
	printf("홀수의 합은 %d입니다.\n", osum);
}