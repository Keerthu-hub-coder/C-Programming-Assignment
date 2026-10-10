#include <stdio.h>

// 1)Approach:
// - get num
// - check num % 2
// - 0 means even
// - else odd

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}
