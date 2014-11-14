/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:07:53 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/14 11:54:32 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Prints the character c on standard output.
*/

void	ft_putchar(char c)
{
	if (c != '\0')
		write(1, &c, 1);
}
