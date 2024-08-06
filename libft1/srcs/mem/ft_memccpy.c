/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:37:57 by danpalac          #+#    #+#             */
/*   Updated: 2024/07/13 17:37:58 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;
	unsigned char	chr;

	dst_ptr = (unsigned char *)dst;
	src_ptr = (unsigned char *)src;
	chr = (unsigned char)c;
	while (n > 0)
	{
		*dst_ptr = *src_ptr;
		dst_ptr++;
		if (*src_ptr == chr)
			return (dst_ptr);
		src_ptr++;
		n--;
	}
	return (NULL);
}
