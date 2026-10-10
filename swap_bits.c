#include<stdio.h>

// Approach:
// - extract n bits from both nums
// - clear those bit positions
// - put second bits into first
// - put first bits into second

int main(){
    int a,b,p,n,x,y,mask;

    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);

    printf("Enter position: ");
    scanf("%d",&p);

    printf("Enter number of bits: ");
    scanf("%d",&n);

    mask=(1<<n)-1;

    x=(a>>p)&mask;
    y=(b>>p)&mask;

    a=a&(~(mask<<p));
    b=b&(~(mask<<p));

    a=a|(y<<p);
    b=b|(x<<p);

    printf("First number: %d\n",a);
    printf("Second number: %d\n",b);

    return 0;
}