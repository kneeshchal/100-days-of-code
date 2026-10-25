#include<stdio.h>
int main()
{
    char str[100];
    int i = 0;
    int vowel = 0;
    int consonant = 0;
    printf("enter a string: ");
    scanf("%s", str);

    while(str[i] != '\0'){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] ==
        'O' || str[i] == 'U'){
         vowel++;
 }
   else{
    consonant++;
   }
   i++;
}
   printf("number of vowels and consonants are %d and %d respectively", vowel, consonant);
   return 0;
}
