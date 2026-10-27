#include<stdio.h>
int main()
{
    char str[100];
    printf("enter name: ");
    fgets(str, 100, stdin);

    printf("%c", str[0]);
    int space;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            space = i;

        }
    }
    for(int i = 0; i < space; i++){
    if(str[i] == ' '){
        printf(" %c ", str[i + 1]);
    }
    }
    for(int i = space + 1; str[i] != '\n' && str[i] != '\0'; i++){
    printf("%c", str[i]);
       }
       return 0;
}
