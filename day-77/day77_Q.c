#include<stdio.h>
int main()
{
    FILE *inputFile;
    FILE *outputFile;
    inputFile = fopen("info.txt", "r");
    outputFile = fopen("output.txt", "w");
    if(inputFile == NULL){
        printf("File cannot be accessed");
        return 1;
    }
    if(outputFile == NULL){
    printf("Output file cannot be created");
    fclose(inputFile);
    return 1;
    }
    int ch;
    while((ch = fgetc(inputFile)) != EOF)
  {
    if(ch >= 'a' && ch <= 'z')
  {
    ch = ch - ('a' - 'A');
  }
  fputc(ch, outputFile);
  }
  fclose(inputFile);
  fclose(outputFile);
  printf("text converted successfully");
  return 0;
}
