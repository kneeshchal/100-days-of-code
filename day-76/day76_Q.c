#include<stdio.h>
int main()
{
    char filename[100];
    printf("enter filename: ");
    scanf("%s", filename);
    FILE *fp;
    fp = fopen(filename, "r");
    if(fp == NULL)
    {
    printf("File does not exist or cannot be opened.");
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
