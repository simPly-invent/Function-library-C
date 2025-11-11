/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:53:01 by mobenais          #+#    #+#             */
/*   Updated: 2025/11/11 12:10:12 by mobenais         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* Include library for testing function or function that use malloc*/

# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdint.h>
# include <bsd/string.h>
# include <limits.h>

/*  BONUS PART  */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;


t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int	ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/*    Clean name for different const value   */

# define MAX_INT 2147483647
# define MIN_INT -2147483648
# define SIZE_T_MAX 4294967295

/*        Value ascii of whitespace           */

# define MIN_VALUE_WHITESPACE 9
# define MAX_VALUE_WHITESPACE 13
# define SPACE ' '

/*              convert case value            */

# define CONVERT_CASE 32

/* My functions */

/* prototype of function for convert string case or ascii to int*/
int		ft_atoi(const char *str);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
/*--------------------------------------------------------------*/

/* prototype of function that return a boolean */
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int ch);
/*--------------------------------------------------------------*/

/* prototype of function for compare two string or to space of memory*/
int		ft_strncmp(const char *src, const char *dest, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/*-------------------------------------------------------------------*/

/* prototype for function that can copy character or bloc memory */
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_calloc(size_t size_tab, size_t size);
void	ft_bzero(void *s, size_t n);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
/*---------------------------------------------------------------*/



/*function for write number and character*/
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
/*--------------------------------------------------------------*/

/* prototype for length of string */
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
/*--------------------------------------------------------------*/

/*  function for find occurence of chracter in string  */
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
/*-----------------------------------------------------*/

/*Here there is proto of function who can read bloc memory*/
char	*ft_strdup(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/*--------------------------------------------------------*/
#endif
