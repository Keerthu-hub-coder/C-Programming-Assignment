#include<stdio.h>

// Approach:
// - take every pair using 2 loops
// - check a[i] + a[j]
// - if equals target print pair

int main(){
    int a[100],n,x,i,j,c=0;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter target: ");
    scanf("%d",&x);

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==x){
            printf("%d %d\n",a[i],a[j]);
            c=1;
            }
        }
    }

    if(c==0)
        printf("No pair found");

    return 0;
}