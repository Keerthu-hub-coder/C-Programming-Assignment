#include <stdio.h>
// Problem 3
// Write a C program that takes a positive integer from the user and calculates its factorial
// Approach:
// - get num
// - start fact = 1
// - multiply 1 to num
// - 0! = 1

int main() {
    int num;
    unsigned long long fact = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("oops, enter a positive number \n");
    } else {
        for (int i = 1; i <= num; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", num, fact);
    }

    return 0;
}