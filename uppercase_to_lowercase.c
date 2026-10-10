#include<stdio.h>
// Approach:
// - scan string
// - check A to Z
// - add 32
// - leave others same
int main(){
    char str[200];

    printf("Enter a string: ");
    fgets(str,200,stdin);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
}

    printf("Lowercase string: %s",str);

    return 0;
}