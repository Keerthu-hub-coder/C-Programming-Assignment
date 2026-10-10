// Problem 10
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int num = 0;
    printf("Enter a number as a string: ");
    scanf("%s", str);
    for(int i = 0; str[i] != '\0'; i++)
    {
        num = num * 10 + (str[i] - '0');
    }
    printf("Integer value: %d\n", num);
    return 0;
}