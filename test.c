#include <stdio.h>
void main()
{
    FILE *fileptr;
    char ch[12];
    int line = 0;
    fileptr = fopen("./hello.txt", "r");

    if (fileptr == NULL)
        printf("closed\n");
    else
    {
        printf("open\n ");
        int wr = fread(&ch, sizeof(char), 13, fileptr);
        if (wr)
        {
            printf("read %d bytes", wr);
            printf("\n %s", ch);
        }
        printf("End of file\n");
    }
}
