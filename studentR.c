#include <stdio.h>
struct student
{
    char Name[20];
    
    int Admn_no;
    int class;
    char div[2];
};
void main()
{
    int i;
    FILE *fileptr;
    fileptr = fopen("hello.txt", "W");
    if (fileptr == NULL)
        printf("closed\n");
    else
    {
        printf("open\n");
        printf("Enter the details\n");
        struct student s1 = {"Rohan", 13579, 8, "A"};
        struct student s2 = {"Sam", 13589, 9, "B"};
        fwrite(&s1, sizeof(struct student), 1, fileptr);
        fwrite(&s2, sizeof(struct student), 1, fileptr);
        if (fwrite != 0)
            printf("succesful");
        else
            printf("Write failed!!");

        fclose(fileptr);
    }
}
