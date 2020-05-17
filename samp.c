#include <stdio.h>
void main()
{
    FILE *fileptr;
    char ch[] = "helloworld!";
    int line = 0;
    fileptr = fopen("./hello.txt", "w");

    if (fileptr == NULL)
        printf("closed\n");
    else
    {
        printf("open\n");
        int wr = fwrite(ch, sizeof(ch), 1, fileptr);
        if (wr)
        {
            printf("wrote %d bytes", wr);
        }
        printf("End of file\n");
    }
}
