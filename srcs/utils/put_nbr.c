/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athion <athion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 02:59:22 by athion            #+#    #+#             */
/*   Updated: 2020/02/13 04:10:49 by athion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int		put_nbr(int nbr)
{
	char *str;

	str = itoa_base((unsigned long long int)nbr, 10, 0);
	put_str(str);
	return (1);
}