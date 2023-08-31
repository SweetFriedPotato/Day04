#include<stdio.h>
int main() {
	char color;

	printf("신호등의 색상을 입력하시오: (R, G, Y)");
	scanf("%c", &color);
	switch (color) {
	case 'R':
	case 'r':
		printf("정지!\n");
		break;
	case 'Y':
	case 'y':
		printf("대기!\n");
		break;
	case 'G':
	case 'g':
		printf("출발!\n");
		break;
	default:
		printf("다시 입력하세요!");
	}
}