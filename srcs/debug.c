/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athion <athion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 02:27:57 by athion            #+#    #+#             */
/*   Updated: 2020/02/13 05:17:33 by athion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.h"
#include <stdio.h>

int		print_memory_line(void *addr)
{
	int i;
	int o;

	i = 0;
	o = 0;
	put_hexa((unsigned long long int)addr);
	put_str(":\t");
	while (((char *)addr)[i] && i < 10)
	{
		put_hexa((long long unsigned int)((char *)addr)[i]);
		if (i % 2 != 0 && i != 0)
		{
			put_str(" ");
			o = 0;
		}
		i++;
		o++;
	}
	if (o % 2 != 0)
		put_str("  ");
	o = (i % 2 != 0) ? i - 1 : i;
	while (o < 10)
	{
		if (o % 2)
			put_str(" ");
		put_str("  ");
		o++;
	}
	o = 0;
	put_str("|\t");
	while (((char *)addr)[o] && o < 10)
	{
		if (is_printable(((char *)addr)[o]))
			put_char(((char *)addr)[o++]);
		else
			put_char('.');
	}
	put_str("\n");
	return (i);
}

int		print_memory(void *addr)
{
	int i;

	i = 0;
	while (((char *)addr)[i])
		i += print_memory_line(&((char *)addr)[i]);
	return (1);
}

int		print_memory_array(void *addr, int length)
{
	int i;
	char (*tab)[50];

	tab = addr;
	i = 0;
	while (tab[i] && i < length)
	{
		put_str("\n\t\t\t   array[");
		put_nbr(i);
		put_str("]\n\n");
		print_memory(&tab[i++]);
	}
	return (1);
}