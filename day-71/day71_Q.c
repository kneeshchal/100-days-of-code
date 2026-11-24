#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("info.txt", "w");
    char name[100];
    int age;
    printf("Enter name: ");
    fgets(name, 100, stdin);
    printf("Enter age: ");
        scanf("%d", &age);
        fprintf(fp, "Name: %s", name);
        fprintf(fp, "Age: %d", age);
        fclose(fp);
        printf("Data successfully stored in info.txt");
        return 0;
}
