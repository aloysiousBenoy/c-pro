#include <stdio.h>
struct student
{
    char Name[20];
    int Admn_no;
    int class;
    char div;
} s[2];
void main()
{
    int i;
    FILE *fileptr;
    fileptr = fopen("hello.txt", "w");
    if (fileptr == NULL)
        printf("closed\n");
    else
    {
        printf("open\n");
        printf("Enter the details\n");
        for (i = 0; i < 2; i++)
        {
            scanf("%s", s[i].Name);
            scanf("%d", &s[i].Admn_no);
            scanf("%d", &s[i].class);
            scanf("\n%c", &s[i].div);
            fwrite(&s[i], sizeof(struct student), 1, fileptr);
            printf("enter details\n");
        }
        if (fwrite != 0)
            printf("succesful\n");
        else
            printf("not written");
        freopen("hello.txt", "r", fileptr);
        for (i = 0; i < 2; i++)
        {
            while (fread(&s[i], sizeof(struct student), 1, fileptr))
                printf("Name:%s Admn no:%d class:%d div:%c\n", s[i].Name, s[i].Admn_no, s[i].class, s[i].div);
        }
    }
}