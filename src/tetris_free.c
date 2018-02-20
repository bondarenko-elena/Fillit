/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetris_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlevko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 20:10:25 by vlevko            #+#    #+#             */
/*   Updated: 2017/12/18 20:36:13 by vlevko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	tetris_free(char ***arr, int count)
{
	int	i;

	i = 0;
	if (!(*arr))
		return (0);
	while (i < count)
	{
		free((*arr)[i]);
		i++;
	}
	free(*arr);
	(*arr) = NULL;
	return (1);
}
