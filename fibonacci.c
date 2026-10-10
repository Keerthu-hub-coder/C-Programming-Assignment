#include <stdio.h>
// 4.Approach:
// - get number of terms
// - start 0, 1
// - next = first + second
// - shift values
// - repeat

int main() {
    int num;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    if (num <= 0) {
        printf("oops, enter a positive number \n");
    } else {
        printf("Fibonacci Series: \n");
        printf("%d, %d, %d", 0, 1, 1);
        int first_num = 1, second_num = 1, next_num;
        for(int i = 1; i<= num-3; i++){
            next_num = first_num + second_num;
            printf(", %d", next_num);
            first_num = second_num;
            second_num = next_num;
        }
    }

}