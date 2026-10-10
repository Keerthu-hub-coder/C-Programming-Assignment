#include<stdio.h>
// Approach:
// - array for 26 letters
// - check every char
// - mark matching alphabet index
// - if all 26 marked -> pangram
int main(){
    char str[200];
    int a[26]={0},count=0;

    printf("Enter a string: ");
    fgets(str,200,stdin);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z')
        a[str[i]-'A']=1;
        else if(str[i]>='a' && str[i]<='z')
        a[str[i]-'a']=1;
    }

    for(int i=0;i<26;i++){
        if(a[i]==1)
        count++;
    }

    if(count==26){
        printf("The string is a pangram");
    }
    else{
        printf("The string is not a pangram");
    }
    return 0;
}