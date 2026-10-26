#include<stdio.h>
int main()
{
    char str[100];
    int spaces = 0;
    int digits = 0;
    int special = 0;
    printf("enter a string: ");
    fgets(str, 100, stdin);
    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++){
        if(str[i] == ' '){
            spaces++;
        }
      else  if(str[i] >= '0' && str[i] <='9'){
            digits++;
        }
       else if(str[i] >= 'a' && str[i] <= 'z'){
        continue;
       }
       else if(str[i] >= 'A' && str[i] <= 'Z'){
        continue;
       }
       else{
        special++;
       }
    }
    printf("number of spaces: %d\n", spaces);
    printf("number of digits: %d\n", digits);
    printf("number of special characters: %d\n", special);
    return 0;
}
