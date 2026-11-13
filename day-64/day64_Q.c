#include<stdio.h>
int longestSubstring(char s[])
{
    int longLen = 0;
    for(int i = 0; s[i] != '\0'; i++){
        int len = 0;
        int seen[256] = {0};
        for(int j = i; s[j] != '\0'; j++){
            if(seen[s[j]] == 1){
    break;
   }

       seen[s[j]] = 1;
       len++;
        }
        if(len > longLen){
            longLen = len;
        }
    }
    return longLen;
}
int main()
{
    char s[100];

   printf("Enter a string: ");
   scanf("%s", s);
   int answer = longestSubstring(s);
   printf("Longest substring is of length %d", answer);
   return 0;
}
