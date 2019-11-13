/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrignol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 10:50:45 by mbrignol          #+#    #+#             */
/*   Updated: 2019/11/13 15:12:42 by mbrignol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int get_next_line(int fd, char **line);
int	ft_strchr_gnl(char *s, char c);
int ft_strlen_gnl(char *s);
char *ft_strjoin_gnl(char const *s1, char const *s2);
void *ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);
#endif
