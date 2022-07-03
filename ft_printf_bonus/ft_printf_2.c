#include "ft_printf.h"

void	find_flag(t_data *td)
{
	t_flag	*tf;

	tf = (t_flag *)malloc(sizeof(t_flag));
	if (!tf)
		td->tlen = -1;
	tf = init_flag(tf);
	if (td->fmt[td->i] == '0')
		pf_spacedigit(td, tf);
	else if (ft_isdigit(td->fmt[td->i]))
		pf_zerospace(td, tf);
	else if (td->fmt[td->i] == '-')
		pf_putminus(td, tf);
	else if (td->fmt[td->i] == '#')
		pf_sharp(td, tf);
	else if (td->fmt[td->i] == ' ')
		pf_space(td, tf); 
}
// try to find a way to run and store flag in a go + store spec in the end
// then convert once + write follow flag
