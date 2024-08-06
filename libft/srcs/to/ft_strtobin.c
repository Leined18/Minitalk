/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtobin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:38:40 by danpalac          #+#    #+#             */
/*   Updated: 2024/07/26 20:43:17 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	copy_bin(char *bin, char *char_bin, size_t *j)
{
	size_t	k;

	k = 0;
	while (k < 8)
	{
		bin[*j] = char_bin[k];
		(*j)++;
		k++;
	}
	free(char_bin);
}

char	*ft_strtobin(const char *str)
{
	size_t	len;
	char	*bin;
	char	*char_bin;
	size_t	i;
	size_t	j;

	if (!str)
		return (NULL);
	len = ft_strlen(str);
	bin = malloc(8 * len + 1);
	if (!bin)
		return (NULL);
	i = -1;
	j = 0;
	while (++i < len)
	{
		char_bin = ft_atobin((unsigned char)str[i]);
		if (!char_bin)
			return (free(bin), NULL);
		copy_bin(bin, char_bin, &j);
	}
	bin[j] = '\0';
	return (bin);
}
