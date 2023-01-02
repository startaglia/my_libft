#include "libft.h"
static int check_char(char c, char const *set)
{
    int i;

    i = 0;
    while (set[i])
    {
        if(set[i] == c)
            return(1);
        i++;
    }
    return (0);
}
char    *ft_strtrim(char const *s1, char const *set)
{
    int i;
    size_t start;
    size_t end;
    char *str;

    end = ft_strlen((char *)s1) - 1;
    i = 0;
    start = 0;
     // QUESTO LAVORA FINO A QUANDO NE TROVA UNO UGUALE, NON VALE 0 ALL'INIZIO! TORNA 0 SOLO SE IL CARATTERE NON CORRISPONDE A NESSUNO CHE STA IN SET. IN QUEL CASO NON ENTRA PROPRIO NEL CICLO, SE ENTRA INVECE SIGNIFICA CHE DEVE CONTROLLARE QUELLO DOPO IL PRIMO CARATTERE
    while (s1[start] && check_char(s1[start], set))
        start++;
    while(end > start && s1[end] && check_char(s1[end], set))
        end--;
    str = (char *)malloc(sizeof(*s1) * (end - start + 1));
    while (start <= end)
        str[i++] = s1[start++];
    str[i] = 0;
    return(str);
}
