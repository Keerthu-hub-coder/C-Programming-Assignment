#include<stdio.h>
// Approach:
// - read string
// - scan char by char
// - if current and next both spaces skip one
// - else copy to new string
int main(){
    char str[200],res[200];
    int i=0,j=0;

    printf("Enter a string: ");
    fgets(str,200,stdin);

    while(str[i]!='\0'){
        if(str[i]==' ' && str[i+1]==' '){
            i++;
        }
        else{
            res[j]=str[i];
            j++;
            i++;
        }
    }

    res[j]='\0';

    printf("After removing extra spaces: %s",res);

    return 0;
}