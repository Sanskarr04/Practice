#include <stdio.h>

int main() {
    int n = 7; // Change this value to the desired input

    for (int i = 1; i <= 2 * n - 1; i++) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            if (i <= j && i <= 2 * n - j && i <= 2 * n - i)
                printf("%d ", n - i + 1);
            else if (j < i && j <= 2 * n - j && j <= 2 * n - i)
                printf("%d ", n - j + 1);
            else if (2 * n - j < i && 2 * n - j < j && 2 * n - j <= 2 * n - i)
                printf("%d ", n - 2 * n + j + 1);
            else
                printf("%d ", n - 2 * n + i + 1);
        }
        printf("\n");
    }

    return 0;
}
