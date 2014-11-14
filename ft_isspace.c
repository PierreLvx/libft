/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 20:04:22 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/14 11:54:34 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(int c)
{
	if (c == ' '
		|| c == '\t'
		|| c == '\n'
		|| c == '\r'
		|| c == '\v'
		|| c == '\f')
	{
		return (1);
	}
	return (0);
}
