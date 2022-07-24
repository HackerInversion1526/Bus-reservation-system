#include<stdio.h>
int main()
{
    /* code */
    FILE *fptr;
    fptr = fopen("hello.txt","r");
    char ch;
    while(ch!=EOF)
    {
        ch = fgetc(fptr);
        putchar(ch);

    }
    fclose(fptr);
    return 0;
}
