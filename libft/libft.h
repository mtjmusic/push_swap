/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matej <matej@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:26:26 by mmusic            #+#    #+#             */
/*   Updated: 2024/11/15 14:51:16 by matej            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* # include <bsd/string.h>
# include <ctype.h>
# include <stdio.h> */
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

/* Mandatory functions */

int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_isdigit(int c);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
size_t				ft_strlen(const char *str);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *s, int c, size_t n);
char				*ft_strnstr(const char *big, const char *little,
						size_t len);
char				*ft_strdup(const char *s1);
void				*ft_calloc(size_t count, size_t size);

/* Additional functions */

char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

/* Bonus functions */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
	struct s_list	*prev;
}					t_l;

t_l				*ft_lstnew(void *content);
void				ft_lstadd_front(t_l **lst, t_l *new);
int					ft_lstsize(t_l *lst);
t_l				*ft_lstlast(t_l *lst);
void				ft_lstadd_back(t_l **lst, t_l *new);
void				ft_lstdelone(t_l *lst, void (*del)(void *));
void				ft_lstclear(t_l **lst, void (*del)(void *));
void				ft_lstiter(t_l *lst, void (*f)(void *));
t_l				*ft_lstmap(t_l *lst, void *(*f)(void *),
						void (*del)(void *));
t_l				*ft_lstllast(t_l *lst);
void			ft_lstprint(t_l *lst);


#endif