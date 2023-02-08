/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsepar <junsepar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 00:41:06 by junsepar          #+#    #+#             */
/*   Updated: 2023/02/09 08:33:51 by junsepar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4096 
# endif

char		*read_line(int fd, char *buf, char *backup, int n);
char		*get_next_line(int fd);
char		*need_backup(char *line);
char		*ft_strdup(const char *s1);
char		*ft_strchr(const char *s, int c);
char		*ft_strjoin(char const *s1, char const*s2);
size_t		ft_strlcpy(char *dst, \
		const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, \
		const char *src, size_t dstsize);
size_t		ft_strlen(const char *s);
#endif
