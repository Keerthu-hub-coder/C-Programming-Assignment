#include<stdio.h>

// Approach:
// - track min1 min2
// - track max1 max2
// - update while scanning array
// - ignore duplicates

int main(){
    int a[100],n,i;
    int min1,min2,max1,max2;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    min1=max1=a[0];
    min2=2147483647;
    max2=-2147483648;

    for(i=1;i<n;i++){

        if(a[i]<min1){
            min2=min1;
            min1=a[i];
        }
        else if(a[i]>min1 && a[i]<min2)
            min2=a[i];

        if(a[i]>max1){
            max2=max1;
            max1=a[i];
        }
        else if(a[i]<max1 && a[i]>max2)
            max2=a[i];
    }

    if(min2==2147483647 || max2==-2147483648)
        printf("Second largest/smallest not available");
    else{
        printf("Second smallest: %d\n",min2);
        printf("Second largest: %d\n",max2);
    }

    return 0;
}