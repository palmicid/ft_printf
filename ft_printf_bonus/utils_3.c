#include "ft_printf.h"

void	pf_zerodigit(t_data *td, t_flag *tf)
{
	int	n;

	tf->zero = 1;
	n = 0;
	while (ft_isdigit(td->fmt[td->i]))
	{
		n *= 10;
		n += td->fmt[td->i] - '0';
	}
	
}
/*
void	pf_space32(t_data *td, t_flag *tf)
{

}
*/