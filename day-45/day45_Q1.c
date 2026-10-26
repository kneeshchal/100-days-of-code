#include<stdio.h>
int main()
{
    char str[100];
    int count = 0;
    char ch;
    printf("enter a string: ");
    scanf("%s", str);

    printf("enter a character: ");
    scanf(" %c", &ch);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ch){
            count++;
        }
    }
    printf("frequency of given character is %d", count);
    return 0;
}
