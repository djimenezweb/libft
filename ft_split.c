/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:53:25 by danielji          #+#    #+#             */
/*   Updated: 2025/04/21 10:43:55 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Reserva (utilizando malloc(3)) un array de strings resultante de separar
la string ’s’ en substrings utilizando el caracter ’c’ como delimitador.
El array debe terminar con un puntero NULL.

s: La string a separar.
c: El carácter delimitador.

Devuelve el array de nuevas strings resultante de la separación.
NULL si falla la reserva de memoria. */

#include "libft.h"
#include <stdio.h>

static char	*trim(const char *s, char c)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] == c)
		start++;
	while (end > 0 && s[end] == c)
		end--;
	if (start > end || end < 0)
		return (ft_strdup(""));
	trimmed = ft_substr(s, start, (end - start + 1));
	return (trimmed);
}

static size_t	get_string_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
		{
			i++;
		}
		if (s[i])
		{
			i++;
			count++;
		}
		while (s[i] && s[i] != c)
		{
			i++;
		}
	}
	return (count);
}

static void	string_to_array(char **arr, char const *str, char c, size_t count)
{
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	start = 0;
	end = 0;
	while (count > 0)
	{
		while (str[start] == c)
		{
			start++;
		}
		end = start + 1;
		while (str[end] && (str[end] != c))
		{
			end++;
		}
		arr[i] = ft_substr(str, start, (end - start));
		start = end;
		i++;
		count--;
	}
	arr[i] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**arr;
	size_t	count;

	str = trim(s, c);
	count = get_string_count(str, c);
	arr = malloc((count * sizeof(char *)) + 1);
	if (!arr)
		return ((void *)0);
	if (!c || !s)
	{
		arr[0] = '\0';
		return (arr);
	}
	string_to_array(arr, str, c, count);
	return (arr);
}

/* int	main(void)
{
	int i = 0;
	char** result = ft_split("          ", ' ');

	while (result[i] != NULL)
	{
		ft_putendl_fd(result[i], 1);
		i++;
	}
} */
