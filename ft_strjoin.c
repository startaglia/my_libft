#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    if((!s1) || (!s2))
        return(NULL);
    char *res;
    int i;
    int j;
    int len = ft_strlen((char*)s1) + ft_strlen((char*)s2);

    printf("\nlen: %d\n", len);

    i = 0;
    res = (char*) malloc (len * sizeof(char*) + 1);
    if(!res)
        return(NULL);
    printf("\nsizeofres: %ld\n", sizeof(res));
    
    while (s1[i])
    {
        res[i] = s1[i];
        i++;
    }
    j = i;
    i = 0;
    while (s2[i])
    {
        res[j] = s2[i];
        i++;
        j++;
    }
    res[j] = 0;
    return(res);
}