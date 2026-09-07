#include<stdio.h>
int main()
{
    char N;

    printf("assign N: ");
    scanf("%c", &N);

    if(N == 'a' || N == 'e' || N == 'i' || N == 'o' || N == 'u'){
        printf("N is a vowel");
    }
    else{
        printf("N is a consonant");
    }
    return 0;
}
