#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    if (num > 0) {
        printf("Positive\n");
    } else {
        printf("Non-positive\n");
    }

    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    return 0;
}
