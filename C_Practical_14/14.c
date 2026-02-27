#include <stdio.h>
int main() {
    int i, j, k;
    printf("Pattern a:\n");
    for (i = 1; i <= 6; i++) {
        for (j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
    printf("Pattern b:\n");
    for (i = 1; i <= 3; i++) {
        for (k = 1; k <= 3 - i; k++) printf("   ");
        for (j = 1; j <= i; j++) printf(" * ");
        printf("\n");
    }
    for (i = 2; i >= 1; i--) {
        for (k = 1; k <= 3 - i; k++) printf("   ");
        for (j = 1; j <= i; j++) printf(" * ");
        printf("\n");
    }
    return 0;
}
