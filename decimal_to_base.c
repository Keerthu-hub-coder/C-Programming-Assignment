#include <stdio.h>

// Approach:
// - get decimal num and base
// - divide repeatedly by base
// - store remainders
// - print remainders in reverse
// - 10 to 15 -> A to F

void conversion(int num, int base);
int main(){
    
    int num, base;
    printf("Enter the decimal number and the base to perform conversion:");
    scanf("%d, %d", &num, &base);
    if(base < 2 || base > 16){
        printf("oops!, please run again and give a base between 2 and 16.\n");
        return 0;
    }
    conversion(num, base);
}
void conversion(int a, int b){
    int j =0;
    int result[100];
    if(a == 0)
    {
        printf("0");
        return;
    }                                                                                                                                                                                 
    while(a > 0){
        int remainder = a % b;
        a /= b;
        result[j] = remainder;
        j++;
    }

    printf("Converted number is: ");

    for(int i = j-1; i >= 0; i--){
        
        switch (result[i])
        {
            case 10:
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;
        default:
                printf("%d", result[i]);
                break;
        }
    

    }
    

}
