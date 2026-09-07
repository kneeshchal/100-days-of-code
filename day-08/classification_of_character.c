#include<stdio.h>
int main()
{
    char ch;
    printf("assign ch: ");
    scanf(" %c", &ch);

    if(ch >= 'a' && ch <= 'z'){
        printf("character is lowercase alphabet");
    }
    else if(ch >= 'A' && ch <= 'Z'){
        printf("character is uppercase alphabet");
    }
    else if(ch >= '0' && ch <= '9'){
        printf("character is a digit");
    }
    else{
        printf("character is a special character");
    }
    return 0;
}
