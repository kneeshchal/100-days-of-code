#include<stdio.h>
int main()
{
    char str[100];
    printf("enter a sentence: ");
    fgets(str ,100, stdin);
    int start = 0;

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' ' || str[i] == '\n'){
            int end = i - 1;
            while(start < end){
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }
    printf("%s", str);
    return 0;
}
