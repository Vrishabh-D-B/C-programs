#include <stdio.h>
int main() {
    int n, i;
    unsigned long long int fact = 1;
    printf("\tEnter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
    printf("\tFactorial of %d = %llu \n", n, fact);
    }

    return 0;
}