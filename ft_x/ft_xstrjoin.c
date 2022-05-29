/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xstrjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimo <rnishimo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 00:53:36 by rnishimo          #+#    #+#             */
/*   Updated: 2022/05/30 00:53:53 by rnishimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_xstrjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (ft_xstrdup(s2));
	if (s2 == NULL)
		return (ft_xstrdup(s1));
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
	{
		perror("malloc");
		exit(1);
	}
	i = 0;
	while (*s1 != '\0')
		str[i++] = *(s1++);
	while (*s2 != '\0')
		str[i++] = *(s2++);
	str[i] = '\0';
	return (str);
}
