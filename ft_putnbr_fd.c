#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char str[13];
    int i;
    int nbr;

    nbr = n;
    i = 0;
    if(n < 9 && n >= 0)
    {
        int nb;
        nb = n + 48;
        write(fd, &nb, 1);
    }
    else
    {
        ft_bzero(str, 13);
        if(n < 0)
        {
            str[0] = '-';
            n = -n;
            i++;
        }
        while (n != 0)
        {
            str[i ++] = (n % 10) + 48;
            n /= 10;
        }
        i--;
        if(nbr < 0)
        {
            write(1, &str[0], 1);
            while (i > 0)
                write(fd, &str[i--], 1);
        }
        else
        {
            while (i >= 0)
                write(fd, &str[i--], 1); 
        }
    }
}