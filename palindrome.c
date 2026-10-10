// problem 12
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int flag = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    ;
    for(int i = 0; i < strlen(str) / 2; i++)
    {
        if(str[i] != str[strlen(str) - 1 - i])
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
    return 0;
}