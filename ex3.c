#include<stdio.h>
int main() {
	int score;

	printf("성적 입력: ");
	scanf("%d", &score);

	if (score >= 0 && score >= 100)
		if (score >= 70)
			printf("pass\n");
		else
			printf("fail\n");
	else
		printf("잘못된 데이터입니다.\n");
	return 0;

}