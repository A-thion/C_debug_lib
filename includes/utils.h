/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athion <athion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 03:01:07 by athion            #+#    #+#             */
/*   Updated: 2020/02/13 04:11:39 by athion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include <unistd.h>
# include <stdlib.h>

char	*itoa_base(unsigned long long int value, int base, int maj);
int		put_char(char c);
int		put_str(char *s);
int		put_hexa(unsigned long long int a);
int		is_printable(char c);
int		put_nbr(int nbr);

# endif
