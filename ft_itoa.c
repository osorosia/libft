/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimo <rnishimo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:23:13 by rnishimo          #+#    #+#             */
/*   Updated: 2021/11/01 19:28:12 by rnishimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-1 * n);
	return (n);
}

static void	get_str(char *str, size_t str_i, int n)
{
	if (n < 0)
		str[0] = '-';
	str[str_i] = ft_abs(n % 10) + '0';
	if (n / 10 != 0)
		get_str(str, str_i - 1, ft_abs(n / 10));
}

static size_t	get_str_len(int n)
{
	size_t	str_len;

	if (n == 0)
		return (1);
	str_len = 0;
	if (n < 0)
		str_len++;
	while (n != 0)
	{
		n /= 10;
		str_len++;
	}
	return (str_len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	str_len;

	str_len = get_str_len(n);
	str = (char *)malloc(sizeof(char) * (str_len + 1));
	if (str == NULL)
		return (NULL);
	get_str(str, str_len - 1, n);
	str[str_len] = '\0';
	return (str);
}
