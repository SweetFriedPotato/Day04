#include<stdio.h>
int main(void) {
	int cnt = 0, input;
	while (1) {
		printf("패스워드입력(숫자):");
		scanf("%d", &input);
		if (input == 2020)
		{
			printf("패스워드 일치\n");
			return;
		}
		cnt++;
		if (cnt == 5)
			break;
	}
	printf("%d회 오류: 30초후에 다시 시작\n", cnt);
	return 0;
}