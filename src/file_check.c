/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlevko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 20:01:15 by vlevko            #+#    #+#             */
/*   Updated: 2017/12/22 15:18:45 by vlevko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	file_check(t_flist *fcls)
{
	char	br[1];
	int		ret;

	ret = 1;
	ret = read(fcls->fd, br, 1);
	if (ret == -1 || ret != 0 || fcls->size % 21 != 0)
	{
		error_print("error");
		return (fcls_free(fcls, fcls->fd));
	}
	return (0);
}
