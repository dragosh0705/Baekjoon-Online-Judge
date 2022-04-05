#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	int x, n1, n2;
	scanf("%d\n", &x);

	for (int i = 1; i <= x; i++) {
		scanf("%d %d", &n1, &n2);
		printf("Case %d: %d\n", i, n1 + n2);
	}
}