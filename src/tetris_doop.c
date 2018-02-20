/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetris_doop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlevko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 01:45:31 by vlevko            #+#    #+#             */
/*   Updated: 2017/12/22 15:22:36 by vlevko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	tetris_doop(char ***arr, t_flist *fcls, char buff[BUFF_SIZE], int ***dot)
{
	if (tetris_malloc(arr, fcls->count, buff) != 0)
	{
		dot_free(dot, fcls->count);
		tetris_free(arr, fcls->count);
		return (1);
	}
	if (tetris_fill(arr, fcls->count, buff, dot) != 0)
	{
		dot_free(dot, fcls->count);
		tetris_free(arr, fcls->count);
		return (1);
	}
	tetris_free(arr, fcls->count);
	return (0);
}
