#include<stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    FILE *fp;
    fp = fopen("info.txt", "w");

    if(fp == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    /* Take records and write them to file */
    for(int i = 0; i < n; i++)
    {
        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);

        fprintf(fp, "%s %d %.2f\n",
                students[i].name,
                students[i].roll,
                students[i].marks);
    }

    fclose(fp);

    fp = fopen("info.txt", "r");

    if(fp == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    for(int i = 0; i < n; i++)
    {
        fscanf(fp, "%s %d %f",
               students[i].name,
               &students[i].roll,
               &students[i].marks);

        printf("\nName: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Marks: %.2f\n", students[i].marks);
    }

    fclose(fp);

    return 0;
}
