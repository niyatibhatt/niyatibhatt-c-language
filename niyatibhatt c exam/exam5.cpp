#include <stdio.h>

int main() {
    int n, sum = 0, i = 2;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    do {
        sum += i;
        i += 2;
    } while (i <= n);

    printf("Sum of all even numbers between 1 to %d is: %d\n", n, sum);

    return 0;
}