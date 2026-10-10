#include<stdio.h>
// Approach:
// - right shift number to position
// - create n bit mask
// - AND both

int main(){
    int a,p,n,res;

    printf("Enter number: ");
    scanf("%d",&a);

    printf("Enter position: ");
    scanf("%d",&p);

    printf("Enter number of bits: ");
    scanf("%d",&n);

    res=(a>>p)&((1<<n)-1);

    printf("Extracted value: %d",res);

    return 0;
}