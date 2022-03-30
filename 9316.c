#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
int main() {
	int i = 0;

	scanf("%d", &i);

	for (int line = 1; line <= i; line++) {
		printf("Hello World, Judge %d!\n", line);
	}
	return 0;
}