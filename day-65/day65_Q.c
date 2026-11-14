#include<stdio.h>
int checkAnagram(char s[], char t[])
{
    int freq[26] = {0};
    for(int i = 0; s[i] != '\0'; i++){
        freq[s[i] - 'a']++;
    }
    for(int i = 0; t[i] != '\0'; i++){
        freq[t[i] - 'a']--;
    }
    for(int i = 0; i < 26; i++){
    if(freq[i] != 0){
        return 0;
    }
    }
    return 1;
}
int main()
{
    char s[26];
    char t[26];
    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);
    int answer = checkAnagram(s,t);
    if(answer == 1){
        printf("The given two strings are ANAGRAM");
    }
    else{
        printf("The given two strings are NOT ANAGRAM");
    }

}

