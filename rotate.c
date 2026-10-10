#include<stdio.h>
// Approach:
// - get rotation count and direction
// - use n % size
// - move elements to new positions
// - wrap using modulus

int main(){
    int a[100],b[100],n,r,i;
    char d;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter number of rotations: ");
    scanf("%d",&r);

    printf("Enter direction L or R: ");
    scanf(" %c",&d);

    r=r%n;

    if(d=='L' || d=='l'){
        for(i=0;i<n;i++)
            b[i]=a[(i+r)%n];
        }
        else{
        for(i=0;i<n;i++)
            b[(i+r)%n]=a[i];
    }

    printf("Rotated array: ");

    for(i=0;i<n;i++)
        printf("%d ",b[i]);

    return 0;
}