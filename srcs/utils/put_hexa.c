/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hexa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athion <athion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 02:53:31 by athion            #+#    #+#             */
/*   Updated: 2020/02/13 03:16:12 by athion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int		put_hexa(unsigned long long int a)
{
	char *str;

	str = itoa_base((unsigned long long int)a, 16, 0);
	put_str(str);
	return (1);
}