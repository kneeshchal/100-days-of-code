#include<stdio.h>
int main()
{
    int i;
    char str[100];
    printf("enter a string: ");
    fgets(str, 100, stdin);
        if(str[0] >= 'a' && str[0] <= 'z'){
            str[0] = str[0] - ('a' - 'A');
        }
    for(i = 1; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = ('a' - 'A') + str[i];
        }
    }
    printf("%s", str);
    return 0;
}
