#include "libft.h"

static int check_nb(int n)
{
    int i;

    i = 0;
    while(n != 0)
    {
        n/=10;
        i++;
    }
    return(i);
}

char *ft_itoa(int n)
{
    int len;
    char *res;
    long nb;

    nb = n;
    len = check_nb(n);
    if(nb < 0)
    {
        res = (char *) malloc(sizeof(res) * (len) + 2);
        if(!res)
            return(NULL);
		nb = -nb;
        res[0] = '-';
        while (1 <= len)
        {
            res[len] = nb % 10 + 48;
            nb /= 10;
            len --;
        }
    }
    else if(nb > 0)
    {
        res = (char *) malloc(sizeof(res) * (len));
        if(!res)
            return(NULL);
        while (0 < len)
        {
            res[len - 1] = nb % 10 + 48;
            nb /= 10;
            len--;
        }
    }
    return(res);
}