//
// Created by Dsons on 01.11.2020.
//

#ifndef UNTITLED4_LIBFT_H
#define UNTITLED4_LIBFT_H

#endif //UNTITLED4_LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int 	ft_lower(int c);

int 	ft_toupper(int c);

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

char	*ft_strnstr(const char *str, const char *to_find, size_t len);

void	*ft_memset(void *b, int c, size_t len);

int		ft_strcat(char *dst, char *src, int size);

char	*ft_strrchr(const char *s, int c);

char	*ft_strchr(const char *s, int c);

int     ft_atoi(char *str);

int 	ft_strlen(char const *str);

void	*ft_memmove(void *dst, const void *src, size_t len);

size_t	ft_strlcat(char *dest, const char *src, size_t len);

void	ft_bzero(void *b, size_t len);

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

void	*ft_memchr( const void * str, int n, size_t len);

void 	*ft_memcpy(void *str, const void *ptr, size_t len);

int		ft_memcmp(const void *memptr1, const void *memptr2, size_t len);

void	*ft_strdup(char *str);

int 	ft_strncmp(char * string1, char * string2, unsigned int n );

char 	*ft_substr(char const *s, unsigned int start, size_t len);

char 	**ft_split(char *s, char c);

char 	*ft_strjoin(char *s1, char *s2);

char 	*ft_itoa(int n);

unsigned int	ft_strlcpy(char *dest, const char *src, size_t dstsize);

void 	ft_putchar_fd(char c, int fd);

void 	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

void	*ft_calloc(size_t count, size_t size);

char 	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

