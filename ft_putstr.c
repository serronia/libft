/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jdarko <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/15 15:52:57 by jdarko       #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 15:52:57 by jdarko      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	if (!str)
		return ;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
