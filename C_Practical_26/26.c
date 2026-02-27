#include <stdio.h>
#include <string.h>

int main() {
    char str[200], sub[50];
    int count = 0, i, j;
    printf("Enter main string: "); fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    printf("Enter substring: "); fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = 0;
    
    int lenStr = strlen(str);
    int lenSub = strlen(sub);
    
    for (i = 0; i <= lenStr - lenSub; i++) {
        for (j = 0; j < lenSub; j++) {
            if (str[i + j] != sub[j]) break;
        }
        if (j == lenSub) count++;
    }
    printf("Total appearances: %d\n", count);
    return 0;
}
