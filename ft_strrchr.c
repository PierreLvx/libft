/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:41:40 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/14 11:54:25 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = (int)ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return (&(((char *)s)[len]));
		len--;
	}
	return (NULL);
}
