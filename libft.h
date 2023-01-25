#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
int ft_isalpha(int argument);
int ft_isdigit(int argument);
int ft_isalnum(int argument);
int ft_isascii(int argument);
int ft_isprint(int argument);
size_t ft_strlen(const char *str);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void *ft_memmove(const void *src, void *dest, size_t n);
size_t strlcpy(char *dst, const char *src, size_t size);
size_t strlcat(char *dst, const char *src, size_t size);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char *ft_strnstr(const char *big, const char *little, size_t len);
int atoi(const char *nptr);




#endif