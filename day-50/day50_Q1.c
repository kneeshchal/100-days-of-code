#include<stdio.h>
int main()
{
    char str[100];
    printf("enter dd/04/yyyy: ");
    scanf("%s", str);
    printf("%c%c-Apr-", str[0], str[1]);
    for(int i = 6; str[i] !='\0'; i++){
        printf("%c", str[i]);
    }
    return 0;
}
