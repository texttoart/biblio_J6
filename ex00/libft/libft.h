#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>

/* Chaînes de caractères */
size_t	ft_strlen(const char *s);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strstr(const char *haystack, const char *needle);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_str_is_printable(char *str);

/* Affichage */
void	ft_putchar(char c);
void	ft_putstr(char *str);

/* Autres */
void	ft_swap(int *a, int *b);

#endif
