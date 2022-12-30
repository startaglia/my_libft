#include "libft.h"

// static void ft_bzero(void *s, int n)
// {
//     int i;

//     if(!s)
//         return;
//     i = 0;
//     while (i < n)
//     {
//         *(unsigned char *) (s + i) = 0;
//         i++;
//     }
// }

void *ft_calloc(size_t nmemb, size_t size)
{
    int *ptr;

    ptr = (int *)malloc(nmemb *size);
    if(!ptr)
        return(0);
    ft_bzero(ptr, nmemb);
    return(ptr);
}

