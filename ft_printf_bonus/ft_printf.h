/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruangde <pruangde@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 20:27:33 by pruangde          #+#    #+#             */
/*   Updated: 2022/06/27 22:47:32 by pruangde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_flag
{
	char	*s2w;
	int		minus;
	int		zero;
	int		dot;
	int		sharp;
	int		space;
	int		plus;
	int		wid;
}			t_flag;

typedef struct s_data
{
	const char	*fmt;
	int			tlen;
	va_list		vl;
	int			i;
}				t_data;

// printf
// ft_printf
// 1
int		ft_printf(const char *fmt, ...);
void	process(t_data *td);
void	find_spec_createlist(t_data *td);
t_data	*init_data(t_data *td, const char *fmt);
t_flag	*init_flag(t_flag *tf);

// 2
void	find_flag(t_data *td);

// utils
// 1
void	pf_char(t_data *td);
void	pf_str(t_data *td);
void	pf_number(t_data *td);
void	pf_unsigned(t_data *td);
void	pf_hexlow(t_data *td);

// 2
void	pf_hexupper(t_data *td);
void	pf_ptr(t_data *td);

// libft
// 1
void	sp_putnumber(t_data *td, int nb);
void	putnum_unsig(t_data *td, unsigned int n);
void	puthexnum(t_data *td, unsigned int n, char *base);
void	puthexnum_sizt(t_data *td, size_t n, char *base);
int		ft_isdigit(int c);

// flag utils
// 1

#endif

// next draft fx that will use in flag handle