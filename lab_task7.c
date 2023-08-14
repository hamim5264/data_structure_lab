#include <stdio.h>
struct student {
    char firstName[50];
    char item1[50];
    char item2[50];
    char item3[50];
    float id;
} s[5];

int main() {
    int i;
    // storing information
    for (i = 0; i < 2; ++i) {
        printf("Customer name: ");
        scanf("%s", s[i].firstName);
        printf("Customer Id: ");
        scanf("%f", &s[i].id);
        printf("Item 1: ");
        scanf("%s", s[i].item1);
        printf("Item 2: ");
        scanf("%s", s[i].item2);
        printf("Item 3: ");
        scanf("%s", s[i].item3);
    }
    printf("\n\n");

    // displaying information
    for (i = 0; i < 2; ++i) {
        printf("Customer name: ");
        puts(s[i].firstName);
        printf("Customer Id: %.1f", s[i].id);
        printf("\n");
        printf("Item 1: ");
        puts(s[i].item1);
        printf("Item 2: ");
        puts(s[i].item2);
        printf("Item 3: ");
        puts(s[i].item3);

    }
    return 0;
}
