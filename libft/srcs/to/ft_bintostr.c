/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bintostr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:41:56 by danpalac          #+#    #+#             */
/*   Updated: 2024/08/11 20:54:42 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_bintostr(const char *bin)
{
	size_t	bin_len;
	size_t	i;
	size_t	j;
	char	*str;

	if (!bin)
		return (NULL);
	bin_len = ft_strlen(bin);
	if (bin_len % 8 != 0)
		return (NULL);
	str = (char *)malloc((bin_len / 8) + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (j < bin_len)
	{
		str[i] = ft_bin2char(bin + j);
		i++;
		j += 8;
	}
	str[i] = '\0';
	return (str);
}
