#include "ft_printf.h"

void	st_flag(t_data *td)
{
	t_flag	*tf;

	tf = (t_flag *)malloc(sizeof(t_flag));
	if (!tf)
		td->tlen = -1;
	tf = init_flag(tf);
	find_flag(td, tf);
	pf_withflag(td, tf);
	if (!tf->s2w)
		free(tf->s2w);
	free(tf);
}

void	find_flag(t_data *td, t_flag *tf)
{
	
	if (td->fmt[td->i] == '0')
		pf_zerodigit(td, tf);
//	else if (ft_isdigit(td->fmt[td->i]))
//		pf_space32(td, tf);
//	else if (td->fmt[td->i] == '-')
//		pf_putminus(td, tf);
//	else if (td->fmt[td->i] == '#')
//		pf_sharp(td, tf);
//	else if (td->fmt[td->i] == ' ')
//		pf_space(td, tf);
//	else if (td->fmt[td->i] == '+')
//		pf_plus(td, tf);

}

void	findspec(t_data *td, t_flag *tf)
{
	if (td->fmt[td->i] == 'c')
		conv_char(td, tf);
//	else if (td->fmt[td->i] == 's')
//		conv_str(td, tf);
//	else if (td->fmt[td->i] == 'p')
//		conv_ptr(td, tf);
//	else if (td->fmt[td->i] == 'd' || td->fmt[td->i] == 'i')
//		conv_number(td, tf);
//	else if (td->fmt[td->i] == 'u')
//		conv_unsigned(td, tf);
//	else if (td->fmt[td->i] == 'x')
//		conv_hexlow(td, tf);
//	else if (td->fmt[td->i] == 'X')
//		conv_hexupper(td, tf);
}

void	pf_withflag(t_data *td, t_flag *tf)
{
	
}


// try to find a way to run and store flag in a go + store spec in the end
// then convert once + write follow flag
