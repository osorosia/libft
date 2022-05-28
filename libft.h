/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimo <rnishimo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:47:03 by rnishimo          #+#    #+#             */
/*   Updated: 2022/05/28 19:04:16 by rnishimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>
# include <sys/errno.h>

# define FD_MAX 256
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

// ft_is
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
bool		ft_isnumber(char *str);
int			ft_isprint(int c);
bool		ft_isspace(int c);

// ft_mem
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t count, size_t size);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memset(void *buf, int ch, size_t n);

// ft_num
long		ft_numlen(long num, long base);
long		ft_unumlen(size_t num, long base);

// ft_printf
int			ft_printf(const char *format, ...);
// (private)
long		spec_c(va_list ap);
long		spec_d(va_list ap);
long		spec_p(va_list ap);
long		spec_s(va_list ap);
long		spec_u(va_list ap);
long		spec_x(va_list ap);
long		spec_X(va_list ap);
long		print_spec(char c, va_list ap);

// ft_put
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_base(long num, char *base);
void		ft_putnbr_fd(int n, int fd);
void		ft_putnstr_fd(char *s, size_t n, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putunbr_base(size_t num, char *base);

// ft_str
int			ft_atoi(const char *str);
char		*ft_itoa(int n);
char		**ft_split(char const *s, char c);
char		*ft_strchr(const char *s, int c);
char		*ft_strdup(const char *s1);
char		*ft_strdup_to_c(const char *s1, char c);
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlen(const char *str);
size_t		ft_strlen_to_c(const char *str, const char c);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strndup(const char *s1, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strrchr(const char *s, int c);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			ft_toupper(int c);
int			ft_tolower(int c);

// get_next_line
char		*get_next_line(int fd);

#endif
