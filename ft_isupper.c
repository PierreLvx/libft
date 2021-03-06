/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:48:39 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/15 16:46:58 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The isupper() function tests for any upper-case letter. The value of the
** argument must be representable as an unsigned char or the value of EOF.
*/

int ft_isupper(int c)
{
	return (c >= 65 && c <= 90);
}
