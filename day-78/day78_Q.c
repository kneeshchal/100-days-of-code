#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("info.txt", "r");
    if(fp == NULL){
        printf("file cannot be accessed");
        return 1;
    }
    int ch;
    int vowels = 0;
    int consonants = 0;
    while((ch = fgetc(fp)) != EOF){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
   ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
   {
    vowels++;
   }
   else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            consonants++;
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    fclose(fp);

    return 0;
}


