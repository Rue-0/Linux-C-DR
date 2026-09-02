#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p;
    FILE *file;

    printf("Enter name: ");
    scanf("%49s", p.name);

    printf("Enter age: ");
    scanf("%d", &p.age);

    file = fopen("contacts.txt", "a");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file, "%s %d\n", p.name, p.age);
    fclose(file);

    printf("Contact added.\n");

    file = fopen("contacts.txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nContact List:\n");

    while (fscanf(file, "%49s %d", p.name, &p.age) == 2) {
        printf("Name: %s, Age: %d\n", p.name, p.age);
    }

    fclose(file);

    return 0;
}
