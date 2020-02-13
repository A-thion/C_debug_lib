/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athion <athion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 02:38:41 by athion            #+#    #+#             */
/*   Updated: 2020/02/13 05:00:13 by athion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.h"

int main(void)
{
	char c[] = "hello ofodjasfjodjs jfdsjafoj jodsifjioasnf jsadbjkbvjksbajkqbcd";
	char s[4][50] = {"lslsl fjasdfkl", "jfakfskfkklds", "jfaskfkfsfdasfsda"};
	print_memory(&c);
	print_memory_array(&s, 3);
	return 0;
}
