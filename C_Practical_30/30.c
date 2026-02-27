#include <stdio.h>

struct Address {
    char city[50];
    int pin;
};

struct Employee {
    int id;
    char name[50];
    struct Address addr;
};

int main() {
    struct Employee emp[5];
    for (int i = 0; i < 5; i++) {
        printf("Emp %d ID, Name, City, Pin: ", i + 1);
        scanf("%d %s %s %d", &emp[i].id, emp[i].name, emp[i].addr.city, &emp[i].addr.pin);
    }
    printf("\nEmployee Info:\n");
    for (int i = 0; i < 5; i++) {
        printf("ID: %d, Name: %s, City: %s, Pin: %d\n", emp[i].id, emp[i].name, emp[i].addr.city, emp[i].addr.pin);
    }
    return 0;
}
