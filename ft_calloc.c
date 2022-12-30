#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    int *ptr;

    ptr = (int *)malloc(nmemb *size);
    if(!ptr)
        return(0);
    ft_bzero(ptr, nmemb);
    return(ptr);
}

