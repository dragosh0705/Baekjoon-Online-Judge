#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	int n,i, c, v;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d %d", &c, &v);
		printf("You get %d piece(s) and your dad gets %d piece(s).\n", c / v, c%v);

	}

}