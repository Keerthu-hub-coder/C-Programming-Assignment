#include<stdio.h>

// Approach:
// - first copy all negatives
// - then copy zero and positives
// - keep same order

int main(){
    int a[100],b[100],n,i,j=0;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++){
        if(a[i]<0){
            b[j]=a[i];
            j++;
        }
    }

    for(i=0;i<n;i++){
        if(a[i]>=0){
            b[j]=a[i];
            j++;
        }
    }

    printf("New array: ");

    for(i=0;i<n;i++)
        printf("%d ",b[i]);

    return 0;
}