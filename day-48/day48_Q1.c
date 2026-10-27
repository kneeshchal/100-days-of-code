#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    printf("enter string 1: ");
    scanf("%s", str1);
    printf("enter string 2: ");
    scanf("%s", str2);
    if(strlen(str1) != strlen(str2)){
            printf("not rotation");
        return 0;
    }
    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);
    if(strstr(temp, str2) != NULL){
        printf("rotation");
    }
    else{
        printf("not rotation");
    }
    return 0;
}
