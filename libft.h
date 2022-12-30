#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}
			t_list;
//  ||--------------------------------------------------------------------------------||
//  ||                                     PART_1                                     ||
//  ||--------------------------------------------------------------------------------||
int				ft_strlen(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int 			ft_isascii(int c);
int 			ft_isprint(int c);
int 			ft_toupper(int c);
int				ft_atoi(char *str);
char 			*ft_strchr(const char *s, int c);
char 			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *haystack, const char *needle, size_t len);
void 			*ft_memset(void *s, int c, int n);
void 			*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void 			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, int n);
int 			ft_memcmp(const void *s1, const void *s2, size_t n);
void 			ft_bzero(void *s, size_t n);
int 			ft_tolower(int c);
void 			*ft_calloc(size_t nmemb, size_t size);
char 			*ft_strdup(const char *s);



#endif