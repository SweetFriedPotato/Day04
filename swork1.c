#include<stdio.h>
int main() {
	char color;

	printf("��ȣ���� ������ �Է��Ͻÿ�: (R, G, Y)");
	scanf("%c", &color);
	switch (color) {
	case 'R':
	case 'r':
		printf("����!\n");
		break;
	case 'Y':
	case 'y':
		printf("���!\n");
		break;
	case 'G':
	case 'g':
		printf("���!\n");
		break;
	default:
		printf("�ٽ� �Է��ϼ���!");
	}
}