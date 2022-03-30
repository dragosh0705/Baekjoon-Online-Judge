#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	int school = 0, pc = 0, academi = 0, home = 0;
	int time = 0, min = 0, sec = 0;
	
	scanf("%d", &school);
	scanf("%d", &pc);
	scanf("%d", &academi);
	scanf("%d", &home);

	time = school + pc + academi + home;

	min = time / 60;
	sec = time % 60;

	printf("%d\n", min);
	printf("%d", sec);
}