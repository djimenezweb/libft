/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:11:38 by danielji          #+#    #+#             */
/*   Updated: 2025/04/10 13:11:40 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>

int		ft_atoi(char *str);
void	ft_bzero(void *s, int n);
void	*ft_calloc(int nelem, int size);
int		ft_isalnum(char c);
int		ft_isalpha(char c);
int		ft_isascii(char c);
int		ft_isdigit(char c);
int		ft_isprint(char c);
void	*ft_memchr(void *s, int c, int n);
int		ft_memcmp(void *s1, void *s2, int n);
void	*ft_memcpy(void *dest, void *src, int n);
void	*ft_memmove(void *dest, void *src, int n);
void	*ft_memset(void *s, int c, int n);
char	*ft_strchr(char *str, char c);
char	*ft_strdup(const char *str);
int		ft_strlcat(char *dst, char *src, int size);
int		ft_strlcpy(char *dst, char *src, int size);
int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(char *big, char *little, int len);
char	*ft_strrchr(char *str, char c);
char	*ft_substr(char *s, unsigned int start, int len);
char	ft_tolower(char c);
char	ft_toupper(char c);

#endif
