#include<stdio.h>

// Approach:
// - keep i and j for both arrays
// - compare current elements
// - copy smaller one
// - move that index
// - copy leftovers at end

int main(){
    int a[50],b[50],c[100];
    int n,m,i=0,j=0,k=0;

    printf("Enter size of first array: ");
    scanf("%d",&n);

    for(int x=0;x<n;x++)
        scanf("%d",&a[x]);

    printf("Enter size of second array: ");
    scanf("%d",&m);

    for(int x=0;x<m;x++)
        scanf("%d",&b[x]);

    while(i<n && j<m){

        if(a[i]<b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];

    }

    while(i<n)
        c[k++]=a[i++];

    while(j<m)
        c[k++]=b[j++];

    printf("Merged array: ");

    for(i=0;i<k;i++)
        printf("%d ",c[i]);

    return 0;
}