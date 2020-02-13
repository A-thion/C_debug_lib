/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athion <athion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 02:27:52 by athion            #+#    #+#             */
/*   Updated: 2020/02/13 04:06:14 by athion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DEBUG_H
# define FT_DEBUG_H

# include <unistd.h>
# include "utils.h"


int		print_memory(void *addr);
int		print_memory_array(void *addr, int length);

# endif
