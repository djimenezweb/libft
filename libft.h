/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:11:38 by danielji          #+#    #+#             */
/*   Updated: 2025/04/13 20:59:35 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef LIBFT_H
# define LIBFT_H

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strlen(char *str);
void	*ft_memset(void *s, int c, int n);
void	ft_bzero(void *s, int n);
void	*ft_memcpy(void *dest, void *src, unsigned int n);
void	*ft_memmove(void *dest, void *src, unsigned int n);
int		ft_strlcpy(char *dst, char *src, unsigned int size);
int		ft_strlcat(char *dst, char *src, unsigned int size);
char	ft_toupper(int c);
char	ft_tolower(int c);
char	*ft_strchr(char *str, int c);
char	*ft_strrchr(char *str, int c);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
void	*ft_memchr(void *s, int c, int n);
int		ft_memcmp(void *s1, void *s2, int n);
char	*ft_strnstr(char *big, char *little, int len);
int		ft_atoi(char *str);
void	*ft_calloc(int nelem, int size);
char	*ft_strdup(const char *str);
char	*ft_substr(char *s, unsigned int start, int len);

#endif
