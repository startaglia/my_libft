#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}
			t_list;

int	ft_strlen(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	ft_isalpha(int c);

/*
** Part 1 - Libc functions
*/
// void ft_memset();


#endif