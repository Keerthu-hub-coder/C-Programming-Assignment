#include<stdio.h>
// Approach:
// - get integer
// - take digits using %10
// - convert digit to char
// - store
// - reverse at end
// - handle negative sign
int main(){
    int n,i=0,j;
    char a[20],t;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(n==0){
        a[i++]='0';
    }
    else{
    if(n<0){
        a[i++]='-';
        n=-n;
    }

    int s=i;

    while(n>0){
        a[i++]=(n%10)+'0';
        n=n/10;
    }

    for(j=s;j<(i+s)/2;j++){
        t=a[j];
        a[j]=a[i-1-(j-s)];
        a[i-1-(j-s)]=t;
    }
    }

    a[i]='\0';

    printf("String: %s",a);

    return 0;
}