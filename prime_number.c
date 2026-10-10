#include <stdio.h>
// 2)Approach:
// - get num
// - <=1 not prime
// - loop from 2
// - if divisible anywhere -> not prime
// - else prime

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;

    }else{
        for(int i = 2; i <= num-1; i++){
            if(num % i == 0){
                printf("%d is not a prime number.\n", num);
                return 0;
            }
        }
        printf("%d is a prime number.\n", num);
    }
}