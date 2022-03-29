#include <stdio.h>

void main() {
    int h = 0, m = 0;

    if (h >= 0 && h <= 23) {
        if (m >= 0 && m <= 59) {

            scanf("%d %d", &h, &m);

            if (h >= 1 && h <= 23 && m >= 0 && m <= 44) {
                printf("%d %d", h - 1, m + 15);
            }

            if (h >= 0 && h < 1 && m >= 00 && m <= 44) {
                printf("%d %d", 23 - h, m + 15);
            }

            if (h >= 0 && h <= 23 && m >= 45 && m <= 59) {
                printf("%d %d", h, m - 45);
            }
        }
    }
    exit(0);
}