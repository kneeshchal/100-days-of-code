#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    printf("enter string: ");
    fgets(str1, 100, stdin);
    printf("enter string: ");
    fgets(str2, 100, stdin);
    if(strlen(str1) != strlen(str2)){
        printf("not an anagram");
        return 0;
    }
    for(int i = 0; str1[i] != '\0'; i++){
        int found = 0;
        for(int j = 0; str2[j] != '\0'; j++){
            if(str1[i] == str2[j]){
                str2[j] = ' ';
                found = 1;
                break;
            }
        }
            if(found == 0){
                printf("not anagram");
                return 0;
            }

    }
    printf("anagram");
    return 0;
}
