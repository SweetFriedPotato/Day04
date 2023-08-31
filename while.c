#include<stdio.h>
int main() {
	//문제: 1~10까지 출력

	//while문
	int i = 10;//초기화
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
	} while (i <= 10);//세미콜론 꼭 붙이기
}