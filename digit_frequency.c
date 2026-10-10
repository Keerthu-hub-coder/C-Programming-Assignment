#include <stdio.h>

// Approach:
// - freq array size 10
// - take last digit using %10
// - increase freq[digit]
// - remove last digit using /10
// - print freq

void frequency(int num, int *freq);
int main(){
    int num;
    printf("Enter a number to find the frequency of its digits: ");
    scanf("%d", &num);
    int freq[10] = {0}; 
    frequency(num, freq);   
}
void frequency(int num, int *freq){
    int digit;
    while(num > 0){
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    printf("Frequency of each digit:\n");
    for(int i = 0; i < 10; i++){
        if(freq[i] > 0){
            printf("Digit %d appears %d times\n", i, freq[i]);
        }
    }
}