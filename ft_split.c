#include "libft.h"

int len_string(char const *s, char c, int f)
{
    int i;

    i = 0;
    while(s[f] != c)
    {
        i++;
        f++;
    }
    return(i);
}

char *alloc_mem(char const *s, char c, int f, int k)
{
    char *string;
    int len_s;
    int i;

    len_s = len_string(s, c, f);
    i = 0;
    string = (char *) malloc(sizeof(s) * (len_s + 1));
    while (i < len_s)
    {
        string[i] = s[k];
        i++;
        k++;
    }
    string[i] = s[k];
    return (string);
}

int count_strings(char const *s, char c)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (s[i])
    {
        if(s[i] == c)
            count++;
        i++;
    }
    return(count);
}

char **ft_split(char const *s, char c)
{
    char **res;
    int i;  //  iteratore su tutta la stringa
    int j;  //  contatore delle stringhe risultanti
    int f;  //  flag di dove si trova l'inzio della stringa successiva per la func len_string
    int k;  //  flag di dove si trova l'inzio della stringa successiva per la func alloc_mem  
    
    j = 0;
    i = 0;
    f = 0;
    res = (char **) malloc (sizeof(s) * (count_strings(s, c) + 1));
    while (s[i])
    {
        if(s[i] == c && s[i + 1] != c)
        {
            k = f;
            res[j] = alloc_mem(s, c, f, k);
            f = i + 1;
            j++;
        }
        i++;
    }
    return(res);
}