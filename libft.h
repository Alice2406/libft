#ifndef LIBFT_H
# define LIBFT_H

#include "libc.h"

int ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isprint(int c);
int ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	is_charset(char c, char *charset);
int	count_words(char *str, char *charset);
int	len_mot(char *str, char *charset, int i);
int	ft_strlen(const char *str);
int	ft_strncmp(const char *s1, const char *s2, unsigned int n);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	**ft_split2(char **chaine, int j, char *str, char *charset);
char	**ft_split(char *str, char *charset);
char *ft_strchr(const char *s, int c);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);
char	*ft_strcat(char *dest, char *src, int i);
char	*ft_strjoin(int size, char **strs, char *sep);
char *ft_strrchr(const char *s, int c);
void ft_bzero(void *s, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t size);
void *ft_memmove(void *dest, const void *src, size_t size);
void *ft_memset(void *b, int c, size_t len);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char const *s, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
int	ft_memcmp(const void *p1, const void *p2, size_t size);
char	*ft_strnstr(char *str, char *to_find, size_t len);


#endif
