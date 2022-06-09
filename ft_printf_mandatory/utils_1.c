#include "ft_printf.h"

void    create_lststr(t_data *td)
{
    t_str   *tmp;

    if (!td->lststr)
        td->lststr = (t_str *)malloc(sizeof(t_str));
    else
    {
        tmp = td->lststr;
        while (tmp->next)
            tmp = tmp->next;
        tmp->next = (t_data *)malloc(sizeof(t_str));
    }
}

//create more in struct for save last pos of strlist 

void    lst_char(t_data *td, int i)
{
    create_lststr(td);
}

