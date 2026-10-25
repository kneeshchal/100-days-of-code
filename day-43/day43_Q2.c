#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("enter a string: ");
    scanf("%s", str);

    int i = 0;
    int j = strlen(str) - 1;
    int flag = 1;

    while(i < j){
        if(str[i] != str[j]){
            flag = 0;
            break;
        }

        i++;
        j--;
    }

    if(flag == 1){
        printf("string is palindrome");
    }
    else{
        printf("string is not palindrome");
    }

    return 0;
}
