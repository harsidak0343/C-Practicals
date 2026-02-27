#include <stdio.h>

int main() {
    int arr[100], n = 0, choice, pos, val, i, found;

    while (1) {
        printf("\n1.Insert 2.Update 3.Delete 4.Display 5.Search 6.Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter position and value (pos <= %d): ", n);
                scanf("%d %d", &pos, &val);
                for(i = n; i > pos; i--) arr[i] = arr[i-1];
                arr[pos] = val; n++;
                break;
            case 2:
                printf("Enter position to update and new value: ");
                scanf("%d %d", &pos, &val);
                if(pos < n) arr[pos] = val; else printf("Invalid pos\n");
                break;
            case 3:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                if (pos < n) {
                    for(i = pos; i < n - 1; i++) arr[i] = arr[i+1];
                    n--;
                } else printf("Invalid pos\n");
                break;
            case 4:
                for(i = 0; i < n; i++) printf("%d ", arr[i]);
                printf("\n");
                break;
            case 5:
                printf("Enter value to search: ");
                scanf("%d", &val);
                found = -1;
                for(i = 0; i < n; i++) if (arr[i] == val) found = i;
                if (found != -1) printf("Found at pos %d\n", found);
                else printf("Not found\n");
                break;
            case 6: return 0;
        }
    }
}
