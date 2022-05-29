/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xcalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimo <rnishimo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:02:36 by rnishimo          #+#    #+#             */
/*   Updated: 2022/05/29 18:02:37 by rnishimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	_is_overflow(size_t count, size_t size)
{
	return (size > SIZE_MAX / count);
}

void	*ft_xcalloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (_is_overflow(count, size))
	{
		errno = ENOMEM;
		return (NULL);
	}
	ptr = (void *)malloc(count * size);
	if (ptr == NULL)
	{
		perror("malloc");
		exit(1);
	}
	ft_memset(ptr, 0, count * size);
	return (ptr);
}
