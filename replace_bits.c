#include<stdio.h>

// Approach:
// - create mask
// - clear n bits in first num
// - take n bits from second num
// - shift them
// - OR into first num

int main(){
    int a,b,p,n,mask;

    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);

    printf("Enter position: ");
    scanf("%d",&p);

    printf("Enter number of bits: ");
    scanf("%d",&n);

    mask=((1<<n)-1)<<p;

    a=a&(~mask);

    a=a|((b&((1<<n)-1))<<p);

    printf("Result: %d",a);

    return 0;
}