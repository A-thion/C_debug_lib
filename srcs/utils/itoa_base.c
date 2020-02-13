/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athion <athion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 03:00:48 by athion            #+#    #+#             */
/*   Updated: 2020/02/13 03:14:25 by athion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*ft_strnew(size_t size)
{
	char	*res;
	size_t	i;

	i = 0;
	if (!(res = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (i <= size)
		res[i++] = '\0';
	return (res);
}

int		ft_longlen(unsigned long in, int base)
{
	int i;

	i = 0;
	if (in == 0)
		i++;
	while (in)
	{
		in = in / base;
		i++;
	}
	return (i);
}

char	*itoa_base(unsigned long long int value, int base, int maj)
{
	unsigned long	uin;
	unsigned long	tmp;
	int				size;
	char			*res;
	int				a;

	if (maj == 0)
		a = 87;
	else
		a = 55;
	uin = value;
	size = ft_longlen(uin, base);
	res = ft_strnew(size);
	while (size > 0)
	{
		tmp = uin % base;
		if (tmp > 9)
			res[--size] = tmp + a;
		else
			res[--size] = tmp + '0';
		uin = uin / base;
	}
	return (res);
}