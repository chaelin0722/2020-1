#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i, j;
	scanf("%d%d", &i, &j);
	if (i > j)	printf("%d\n", 1);
	else if (i == j)	printf("%d\n", 0);
	else printf("%d\n", -1);


	return 0;
}