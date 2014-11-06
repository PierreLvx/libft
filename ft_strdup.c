/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/05 10:39:22 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/06 17:55:50 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	str = (char *)malloc(sizeof(*str) * (len));
	ft_strcpy(str, s1);
	return (str);
}