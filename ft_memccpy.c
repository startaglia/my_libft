#include "libft.h"

void *ft_memccpy(void *dest, const void *src,
                     int c, size_t n)
{
    if(!src)
        return(0);
    size_t i;

    i = 0;
    while (i < n && *(unsigned char *)(dest + i - 1) != (unsigned char) c)
    {
        *(unsigned char *)(dest + i) = *(unsigned char*) (src + i);
        i++; 
    }
    return(dest);
}