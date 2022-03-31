# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

void main() {
	int n = 0;

	scanf("%d", &n);

	if (n % 2 == 0) {
		printf("SK");
	}
	else {
		printf("CY");
	}
	exit(0);
}