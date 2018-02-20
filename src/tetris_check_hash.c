/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetris_check_hash.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olbondar <olbondar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 22:03:14 by vlevko            #+#    #+#             */
/*   Updated: 2017/12/23 13:56:19 by olbondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	tetris_check_hash(char *curr)
{
	int i;
	int block;

	i = 0;
	block = 0;
	while (curr[i] != '\0')
	{
		if (curr[i] == '#')
		{
			if ((i + 1) < 20 && curr[i + 1] == '#')
				block++;
			if (((i > 0) && (i - 1) < 20) && curr[i - 1] == '#')
				block++;
			if ((i + 5) < 20 && curr[i + 5] == '#')
				block++;
			if (((i > 0) && (i - 5) < 20) && curr[i - 5] == '#')
				block++;
		}
		i++;
	}
	if (block == 6 || block == 8)
		return (0);
	return (1);
}
