/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athion <athion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 02:38:41 by athion            #+#    #+#             */
/*   Updated: 2020/02/17 22:45:46 by athion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.h"
#include <stdio.h>

int main(void)
{
	// char c[] = "hello ofodjasfjodjs jfdsjafoj jodsifjioasnf jsadbjkbvjksbajkqbcd";
	char **s;

	s = malloc(4 * sizeof(char *));
	s[0] = malloc(50 * sizeof(char));
	s[1] = malloc(50 * sizeof(char));
	s[2] = malloc(50 * sizeof(char));
	s[3] = malloc(1 * sizeof(char));
	int i = 0;
	while (i < 3)
	{
		int o = 0;
		while (o < 26)
		{
			s[i][o] = o + 'a';
			o++;
		}
		i++;
	}
	s[0][26] = '\0';
	s[1][26] = '\0';
	s[2][26] = '\0';

	s[i] = NULL;
	// print_memory(&c);
	printf("testing for: %s, %s, %s\n", s[0], s[1], s[2]);
	print_memory_array(&s, 5);
	return 0;
}
