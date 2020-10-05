/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skathryn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 14:46:53 by skathryn          #+#    #+#             */
/*   Updated: 2020/08/12 18:17:01 by skathryn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# define BUFFER_SIZE	2000000

int						ft_atoi(char *str);
char					*stack_map(int file);
void					ft_putstr(char *str);
char					*read_map(int file);
int						check_valid_map(char *str_map);
char					*create_map(char *str_map);
char					*map_solve(char *str_map);
int						find_max(char *str_map);
char					*form_square(char *str_map, int max_value, int len);
int						strlen_max(char *str_map);
char					*rev_transf(char *str_map);
void					map_out(char *str_map);
void					link_all(char *map);
void					op_map(int argc, char **argv);
char					*ft_strcpy(char *dest, char *src);
char					*map_great(char *map_int);
int						check_valid(char *str_map, int nb);
int						first_str(char *str_map);
int						second_str(char *str_map, int itr);
char					*clear_map(char *str_map);
void					inp_map(void);
int						strlen_cmp(char *str_map);
int						fln_check(char *str_map);

#endif
