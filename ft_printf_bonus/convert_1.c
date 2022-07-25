#include "ft_printf.h"

void	conv_char(t_data *td, t_flag *tf)
{
	char	c;

	tf->s2w = (char *)ft_calloc(2, sizeof(char));
	c = va_arg(td->vl, int);
}

void	conv_str(t_data *td, t_flag *tf)
{
	char	*str;
	size_t	slen;

	str = va_arg(td->vl, char *);
	if (!str)
		str = "(null)";
	else
	{
		slen = ft_strlen(str);
		tf->s2w = (char *)ft_calloc(slen + 1, sizeof(char));
		ft_strlcpy(tf->s2w, str, slen);
	}
}

void	conv_ptr(t_data *td, t_flag *tf)
{
	
}
