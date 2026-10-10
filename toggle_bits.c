#include<stdio.h>
// Approach:
// - create n bit mask
// - shift mask to position
// - XOR with number

int main(){
    int a,p,n,mask;

    printf("Enter number: ");
    scanf("%d",&a);

    printf("Enter position: ");
    scanf("%d",&p);

    printf("Enter number of bits: ");
    scanf("%d",&n);

    mask=((1<<n)-1)<<p;

    a=a^mask;

    printf("Result: %d",a);

    return 0;
}