#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <unistd.h>

int     ft_atoi(const char *s);
void    ft_bzero(void *dest, size_t nbytes);
void    *calloc(size_t nmemb, size_t size);
int     ft_isalnum(char c);
int     ft_isalpha(int c);
int     ft_isascii(const char s);
int     ft_isdigit(int c);
int     ft_isprint(char s);
char    *ft_itoa(int n);
void    *ft_memchr(const void *str, int c, size_t n);
int     ft_memcmp(const void *str1, const void *str2, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t nbytes);
void    *ft_memmove(void *dest, void *src, size_t nbytes);
void    *ft_memset(void *s, int c, size_t n);
void    ft_putchar_fd(char c, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_putstr_fd(char *s, int fd);
char    **ft_split(char const *s, char c);
char    *ft_strchr(const char *src_str, int  char_to_find);
char    *ft_strdup(const char*str);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char    *ft_strjoin(char const *s1, char const *s2);
size_t  ft_strlcat(char *dst, const char *src, size_t nbytes);
size_t  ft_strlcpy(char *dst, const char *src, size_t nbytes);
int     ft_strlen(char const *s);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int     ft_strncmp(const char *str1, const char *str2, size_t n);
char    *ft_strnstr (const char *src_str, const char *goal_str, size_t len);
char    *ft_strrchr(const char *src_str, int  char_to_find);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_substr(char const *src, unsigned int start, size_t len);
char    ft_tolower(char s);
char    ft_toupper(char s);

#endif
