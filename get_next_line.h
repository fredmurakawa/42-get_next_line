/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 19:02:39 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/05/11 19:02:40 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# define BUFF_SIZE 1

typedef struct		s_list
{
	int				fd;
	char			*str;
	struct s_list	*next;
}					t_list;

int					get_next_line(const int fd, char **line);
char				*ft_strnew(size_t size);
void				ft_lstadd(t_list **alst, t_list *new);
char				*ft_strchr(const char *s, int c);
char				*ft_strjoin(char const *s1, char const *s2);
void				ft_strdel(char **as);
char				*ft_strdup(const char *s1);
t_list				*ft_lstnew(int fd, char *str);

#endif
