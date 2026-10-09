#include <stdio.h>

int main(void) {
    int n, a = 0, b = 1, c, i;

    printf("Enter number of terms: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
