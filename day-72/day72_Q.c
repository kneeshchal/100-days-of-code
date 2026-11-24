#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("info.txt", "r");
    if(fp == NULL){
        printf("file could not be opened");
        return 1;
    }
    char str[100];
    while(fgets(str, 100, fp) != NULL)
    {
    printf("%s", str);
    }
    fclose(fp);
    return 0;
}
