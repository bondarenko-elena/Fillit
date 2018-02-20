/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlevko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 20:00:17 by vlevko            #+#    #+#             */
/*   Updated: 2017/12/22 16:16:19 by vlevko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	file_read(int fd, char buff[BUFF_SIZE])
{
	int size;

	ft_bzero(buff, BUFF_SIZE);
	if ((size = read(fd, buff, BUFF_SIZE)) != -1)
		size++;
	return (size);
}
