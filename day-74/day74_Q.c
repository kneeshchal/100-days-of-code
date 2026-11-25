#include<stdio.h>
int main()
{
    char source[100];
    char destination[100];
    FILE *sourceFile;
    FILE *destinationFile;
    printf("enter source filename: "); //info.txt
    scanf("%s", source);
    printf("enter destination filename: ");//copy.txt
    scanf("%s", destination);
    sourceFile = fopen(source, "r");
    destinationFile = fopen(destination, "w");
    if(sourceFile == NULL){
        printf("File cannot be accessed");
        return 1;
    }
    if(destinationFile == NULL)
   {
    printf("Destination file cannot be created.");
    fclose(sourceFile);
    return 1;
   }
   int ch;
   while((ch = fgetc(sourceFile)) != EOF)
  {
    fputc(ch, destinationFile);
  }
  fclose(sourceFile);
  fclose(destinationFile);
   printf("File printed successfully");
   return 0;
}
