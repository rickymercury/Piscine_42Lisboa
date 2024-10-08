/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 23:08:53 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/02 14:04:01 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <unistd.h>
# include <stdlib.h>


int			ft_check_digit_space(char *str);	
int			ft_check_tab(int *tab, int size);
int			*ft_convert_str_to_tab(char *str, int argc);

int			ft_strlen(char *str);
void		ft_putchar(char c);
int			ft_char_to_int(char c);
int			ft_count_valid_digits(char *str);
void		ft_free(int **grid, int *clue, int n);
void		ft_define_next_position(int row, int col, int *next_row, int *next_col, int n);

int			ft_find_solution(int **grid, int row, int col, int n, int *clue);

int			ft_start(int **grid, int n, int *clue);
int			rush01(int n, int *clue);

void		ft_print_solution(int **grid, int n);

void		ft_error(void);

int			ft_is_valid(int **grid, int row, int col, int n, int *clue);
int	        check_rows_right_to_left(int **grid, int row, int col, int n, int *clue);
int     	check_rows_left_to_right(int **grid, int row, int col, int n, int *clue);
int     	check_columns_view_down(int **grid, int row, int col, int n, int *clue);
int	        check_columns_view_top(int **grid, int row, int col, int n, int *clue);

#endif