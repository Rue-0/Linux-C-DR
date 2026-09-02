#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    int arr[3] = {1, 2, 3};
    int *ptr = arr;

    for (int i = 0; i < 3; i++) {
        printf("%d\n", *(ptr + i));
    }

    FILE *file = fopen("output.txt", "w");

    if (file != NULL) {
        fprintf(file, "Text");
        fclose(file);
    }

    struct Person p;
    strcpy(p.name, "Alice");
    p.age = 25;

    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);

    return 0;
}
