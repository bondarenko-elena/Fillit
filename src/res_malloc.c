/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   res_malloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlevko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 20:14:06 by vlevko            #+#    #+#             */
/*   Updated: 2017/12/18 20:37:14 by vlevko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	res_malloc(char ***res, int len)
{
	int	i;

	if (!(*res = (char **)ft_memalloc(sizeof(*res) * (len + 1))))
		return (1);
	i = 0;
	while (i < len)
	{
		if (!((*res)[i] = (char *)ft_memalloc(sizeof(char) * (len + 1))))
		{
			tetris_free(res, len);
			return (1);
		}
		res_filldot((*res)[i], (len + 1));
		i++;
	}
	return (0);
}
