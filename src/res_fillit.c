/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   res_fillit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlevko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 01:55:13 by vlevko            #+#    #+#             */
/*   Updated: 2017/12/19 01:58:51 by vlevko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	res_fillit(char ***res, t_flist *fcls, int ***dot)
{
	while (res_fillalpha(res, fcls, dot, 0) != 0)
	{
		fcls->len = fcls->len + 1;
		tetris_free(res, fcls->len);
		res_malloc(res, fcls->len);
	}
}
