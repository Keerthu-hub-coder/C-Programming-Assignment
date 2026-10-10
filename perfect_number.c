#include <stdio.h>
// 5)Approach:
// - get num
// - find divisors except num itself
// - add them
// - if sum == num -> perfect

int main(){
    int num =0, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if(num <= 0){
        printf("oops, enter a positive number \n");
    }else{
        for(int i = 1; i <= num/2; i++){
            if(num % i == 0){
                sum += i;
            }
        }
        if(sum == num){
            printf("%d is a perfect number.\n", num);
        }else{
            printf("%d is not a perfect number.\n", num);
        }
    }
}