#include <stdio.h>

void *ft_memchr(const void *s, int c, int n)
{
    int i;

    if (!s)
        return(0);
    i = 0;
    while (i < n)
    {
        if(*(char *) (s + i) == (char) c)
            return((unsigned char *)(s + i));
        i++;
    }
    return(0);
}