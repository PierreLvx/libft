/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 10:38:51 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/18 10:39:34 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strisnum(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isnum(str[i]))
			return (0);
		i++;
	}
	return (1);
}