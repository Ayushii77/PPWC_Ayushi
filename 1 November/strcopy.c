#include <stdio.h>
#include <string.h>
#define NIL ('\0')

int strcopy(char *dest, const char *src)
{
    dest[0] = src[0];
    if (src[0] == NULL)
    {
        return 0;
    }
    return strcopy(src+1, dest+1)+1;
}

int main()
{
    char s7[20]; 
    char s6[20] = "hello";
    strcpy(s7, s6);
    printf("%s\n", s7);

    return 0;
}