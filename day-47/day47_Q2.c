#include<stdio.h>
int main()
{
    char str[100];

    printf("enter a sentence: ");
    fgets(str, 100, stdin);

    int count = 0;
    int maxLen = 0;
    int start = 0;
    int maxStart = 0;

    for(int i = 0; str[i] != '\0'; i++){

        if(str[i] == ' ' || str[i] == '\n'){

            if(count > maxLen){
                maxLen = count;
                maxStart = start;
            }

            count = 0;
            start = i + 1;
        }
        else{
            count++;
        }
    }

    int i = maxStart;
    int j = 0;

    printf("longest word is: ");

    while(j < maxLen){
        printf("%c", str[i]);
        i++;
        j++;
    }

    return 0;
}
