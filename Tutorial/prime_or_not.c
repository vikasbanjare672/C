#include <stdio.h>

int main() {
    int n, i;
    int isPrime = 1; // assume prime initially

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0; // 0, 1, and negatives are not prime
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a Prime number.\n", n);
    else
        printf("%d is not a Prime number.\n", n);

    return 0;
}