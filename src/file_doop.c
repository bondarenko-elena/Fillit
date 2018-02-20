/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_doop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olbondar <olbondar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 01:35:28 by vlevko            #+#    #+#             */
/*   Updated: 2017/12/23 13:54:43 by olbondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	file_doop(int ac, char **av, t_flist *fcls, char buff[BUFF_SIZE])
{
	if (file_usage(ac) != 0)
		exit(fcls_free(fcls, 0));
	if ((fcls->fd = file_open(av)) == -1)
		exit(fcls_free(fcls, 0));
	if ((fcls->size = file_read(fcls->fd, buff)) == -1)
		exit(fcls_free(fcls, fcls->fd));
	fcls->count = fcls->size / 21;
	fcls->len = res_len(2, fcls->count * 4);
}
