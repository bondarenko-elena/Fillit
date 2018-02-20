/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetris_malloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olbondar <olbondar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 20:11:12 by vlevko            #+#    #+#             */
/*   Updated: 2017/12/23 13:57:04 by olbondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	tetris_malloc(char ***arr, int count, char buff[BUFF_SIZE])
{
	int	i;

	i = 0;
	if (!(*arr = (char **)ft_memalloc(sizeof(*arr) * (count + 1))))
		return (1);
	while (i < count)
	{
		if (buff[(i + 1) * 20 + i] != '\n'
			&& buff[(i + 1) * 20 + i] != '\0')
			return (error_print("error"));
		i++;
	}
	return (0);
}
