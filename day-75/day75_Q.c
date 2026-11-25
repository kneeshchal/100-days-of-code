#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("info.txt", "a");
    if(fp == NULL){
        printf("File cannot be accessed");
        return 1;
    }
    char text[100];
    printf("enter text to append: ");
    fgets(text, 100, stdin);
    fputs(text, fp);
    fclose(fp);
    printf("Text appended succesfully");
    return 0;
}
