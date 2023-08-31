#include<stdio.h>
int main(void) {
	int dan, i=1;
	do {
		printf("╢э ют╥б");
		scanf("%d", &dan);
	} while (dan < 1 || dan>9);
	
	do {
		printf("%d * %d = %2d\n", dan, i, dan * i);
		i++;
	} while (i <= 9);
	return 0;
}