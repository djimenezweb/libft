/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:36:44 by danielji          #+#    #+#             */
/*   Updated: 2025/04/13 16:18:33 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdlib.h>

/*
The calloc() function allocates memory for an array of NELEM elements
of SIZE bytes each and returns a pointer to the allocated memory. The
memory is set to zero. If NELEM or SIZE is 0, then calloc() returns
either NULL, or a unique pointer value that can later be successfully
passed to free(). If the multiplication of NELEM and SIZE would result
in integer overflow, then calloc() returns an error. By contrast, an
integer overflow would not be detected in the following call to
malloc(), with the result that an incorrectly sized block of memory
would be allocated:
	malloc(NELEM * SIZE);

The malloc() and calloc() functions return a pointer to the allocated
memory, which is suitably aligned for any built-in type. On error,
these functions return NULL. NULL may also be returned by a successful
call to malloc() with a size of zero, or by a successful call to
calloc() with NELEM or SIZE equal to zero.

Si NELEM o SIZE es 0, entonces calloc() devuelve un valor
de puntero único que más tarde puede pasarse con éxito a free().
*/

void	*ft_calloc(int nelem, int size)
{
	int	*arr;
	int	i;

	arr = malloc(nelem * size);
	if (!arr)
	{
		return (0);
	}
	i = 0;
	while (nelem > 0)
	{
		arr[i] = 0;
		i++;
		nelem--;
	}
	return (arr);
}
