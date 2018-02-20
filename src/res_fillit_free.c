/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   res_fillit_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlevko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 02:04:19 by vlevko            #+#    #+#             */
/*   Updated: 2017/12/22 15:53:15 by vlevko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	res_fillit_free(int ***dot, char ***res, t_flist *fcls)
{
	dot_free(dot, fcls->count);
	tetris_free(res, fcls->len);
	fcls_free(fcls, fcls->fd);
}
