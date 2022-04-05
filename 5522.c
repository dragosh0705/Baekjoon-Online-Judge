#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

void main() {
	int i = 0;
	int n = 0;
	int sum = 0;

	for (i = 1; i <= 5; i++) {
		scanf("%d", &n);
		sum = sum + n;
	}
		printf("%d", sum);
		exit(0);
}