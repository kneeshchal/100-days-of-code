#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("info.txt", "r");
    if(fp == NULL){
        printf("File cannot be accessed: ");
        return 1;
    }
    int characters = 0;
    int words = 0;
    int lines = 0;
    int ch;
    int inWord = 0;
    while((ch = fgetc(fp)) != EOF){
        characters++;
        if(ch == '\n'){
        lines++;
    }

    if(ch == ' '|| ch == '\n'){
        inWord = 0;
    }
    else if(inWord == 0){
        words++;
        inWord = 1;
    }
    }
    printf("Characters = %d\n", characters);
    printf("Words = %d\n", words);
    printf("Lines = %d\n", lines);
    fclose(fp);
    return 0;
}
