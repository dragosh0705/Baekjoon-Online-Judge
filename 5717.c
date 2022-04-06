#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void) {
	int m=0, f=0;

	while (1) {
		scanf("%d %d", &m, &f);
		if (m == 0 && f == 0) {
			break;
		}
		else {
			printf("%d\n", m + f);
		}
	}
	return 0;
}