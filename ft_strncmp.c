/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimo <rnishimo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:34:39 by rnishimo          #+#    #+#             */
/*   Updated: 2021/10/31 11:10:51 by rnishimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;

	s1_ptr = (unsigned char *)s1;
	s2_ptr = (unsigned char *)s2;
	while (n > 0)
	{
		if (*s1_ptr != *s2_ptr || *s1_ptr == '\0')
			return ((int)*s1_ptr - (int)*s2_ptr);
		s1_ptr++;
		s2_ptr++;
		n--;
	}
	return (0);
}
