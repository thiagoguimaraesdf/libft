/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:24:45 by tguimara          #+#    #+#             */
/*   Updated: 2021/05/18 17:24:45 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

void	    ft_bzero(void *s, size_t n); // OK
void	    *ft_memset(void *s, int c, size_t n); // OK
void        *ft_memcpy(void *restrict dest, const void *restrict src, size_t n); // REVER TESTE
void        *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n); // OK
void	    *ft_memmove(void *dest, const void *src, size_t n);
void	    *ft_memchr(const void *s, int c, size_t n);
int         ft_memcmp(const void *s1, const void *s2, size_t n);
size_t      ft_strlen(const char *s);
size_t	    ft_strlcpy(char *dst, const char *src, size_t size);
size_t	    ft_strlcat(char *dst, const char *src, size_t size);
char	    *ft_strchr(const char *s, int c);
char	    *ft_strrchr(const char *s, int c);
char        *ft_strnstr(const char *big, const char *little, size_t len);
int         strncmp(const char *s1, const char *s2, size_t n);
int		    ft_atoi(const char *str);
int	        ft_isalpha(int c);
int	        ft_isdigit(int c);
int	        ft_isalnum(int c);
int	        ft_isascii(int c);
int	        ft_isprint(int c);
int	        ft_toupper(int c);
int	        ft_tolower(int c);
void        *ft_calloc(size_t nmemb, size_t size);
char        *ft_strdup(const char *s);

#endif