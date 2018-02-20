/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olbondar <olbondar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:14:31 by vlevko            #+#    #+#             */
/*   Updated: 2017/12/23 14:16:44 by olbondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# define BUFF_SIZE 546

typedef struct	s_flist
{
	int			fd;
	int			count;
	int			len;
	int			size;
}				t_flist;

int				error_print(char *s);

int				fcls_free(t_flist *fcls, int fd);

void			file_doop(int ac, char **av, t_flist *fcls, char \
	buff[BUFF_SIZE]);

int				file_usage(int ac);

int				file_open(char **av);

int				file_read(int fd, char buff[BUFF_SIZE]);

int				file_check(t_flist *fcls);

int				dot_free(int ***dot, int count);

int				dot_malloc(int ***dot, int count);

int				tetris_doop(char ***arr, t_flist *fcls, char buff[BUFF_SIZE], \
	int ***dot);

int				tetris_get_x(char *s, int *i);

int				tetris_ultima_check(char *curr, int ***dot, int index, char ch);

int				tetris_check(char *curr, int ***dot, int index, char ch);

int				tetris_check_hash(char *curr);

int				tetris_free(char ***arr, int count);

int				tetris_malloc(char ***arr, int count, char buff[BUFF_SIZE]);

int				tetris_fill(char ***arr, int count, char buff[BUFF_SIZE], \
	int ***dot);

void			res_fillit(char ***res, t_flist *fcls, int ***dot);

int				res_len(int len, int tetris);

void			res_filldot(void *s, size_t n);

int				res_malloc(char ***res, int len);

void			res_rotate_one(int x, int *j, int *i, int k);

void			res_rotate_two(int x, int *j, int *i);

int				res_rotdot(char ***res, int **curr, int ji[2], int len);

void			res_fillch(char ***res, int **curr, int ji[2], int len);

void			res_back(char ***res, int **curr, int ji[2], int len);

void			res_print(char ***res, int len);

int				res_fillalpha(char ***res, t_flist *fcls, int ***dot, int i);

void			res_fillit_free(int ***dot, char ***res, t_flist *fcls);

void			ft_bzero(void *s, size_t n);

void			*ft_memalloc(size_t size);

void			ft_putendl(char const *s);

char			*ft_strsub(char const *s, unsigned int start, size_t len);

void			ft_putchar(char c);

void			ft_putstr(char const *s);

char			*ft_strnew(size_t size);

#endif
