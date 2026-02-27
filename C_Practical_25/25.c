#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;
    printf("Enter string 1: "); fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;
    
    printf("1.strlen 2.strcpy 3.strcat 4.strcmp 5.strrev\nChoice: ");
    scanf("%d", &choice);
    getchar(); // consume newline
    
    switch(choice) {
        case 1: 
            printf("Length: %lu\n", strlen(str1)); break;
        case 2: 
            strcpy(str2, str1); printf("Copied: %s\n", str2); break;
        case 3: 
            printf("Enter string 2: "); fgets(str2, sizeof(str2), stdin); 
            str2[strcspn(str2, "\n")] = 0;
            strcat(str1, str2); printf("Concat: %s\n", str1); break;
        case 4: 
            printf("Enter string 2: "); fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = 0;
            printf("Cmp: %d\n", strcmp(str1, str2)); break;
        case 5: 
            strrev(str1); printf("Reversed: %s\n", str1); break;
    }
    return 0;
}
