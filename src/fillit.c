/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olbondar <olbondar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 16:13:34 by vlevko            #+#    #+#             */
/*   Updated: 2017/12/23 14:16:08 by olbondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int ac, char **av)
{
	char	buff[BUFF_SIZE];
	char	**arr;
	char	**res;
	int		**dot;
	t_flist	*fcls;

	dot = NULL;
	if (!(fcls = (t_flist *)malloc(sizeof(t_flist))))
		return (1);
	file_doop(ac, av, fcls, buff);
	if (dot_malloc(&dot, fcls->count) != 0)
		return (fcls_free(fcls, fcls->fd));
	if (file_check(fcls) != 0)
		return (dot_free(&dot, fcls->count));
	if (tetris_doop(&arr, fcls, buff, &dot) != 0)
		return (fcls_free(fcls, fcls->fd));
	if (res_malloc(&res, fcls->len) != 0)
	{
		dot_free(&dot, fcls->count);
		return (fcls_free(fcls, fcls->fd));
	}
	res_fillit(&res, fcls, &dot);
	res_print(&res, fcls->len);
	res_fillit_free(&dot, &res, fcls);
	return (0);
}
