/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimo <rnishimo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:00:02 by rnishimo          #+#    #+#             */
/*   Updated: 2021/11/03 07:10:25 by rnishimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == '\t'
		|| c == '\n'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r'
		|| c == ' ');
}

static bool	is_overflow(const char *s, unsigned long num, long sign)
{
	unsigned long	div;
	int				mod;

	div = LONG_MAX / 10;
	mod = LONG_MAX % 10;
	if (sign == -1)
	{
		mod++;
		if (mod == 10)
		{
			div++;
			mod = 0;
		}
	}
	return (num > div || (num == div && *s - '0' > mod));
}

static long	ft_atoi_num(const char *s, unsigned long num, long sign)
{
	while ('0' <= *s && *s <= '9')
	{
		if (is_overflow(s, num, sign))
		{
			if (sign == -1)
				return (LONG_MIN);
			else
				return (LONG_MAX);
		}
		num = num * 10 + *s - '0';
		s++;
	}
	num *= sign;
	return (num);
}

int	ft_atoi(const char *s)
{
	unsigned long	num;
	long			sign;

	num = 0;
	sign = 1;
	while (ft_isspace(*s))
		s++;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	return ((int)ft_atoi_num(s, num, sign));
}
