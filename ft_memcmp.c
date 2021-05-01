/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 21:34:33 by echerell          #+#    #+#             */
/*   Updated: 2021/04/30 23:31:22 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) > *(unsigned char *)(s2 + i))
			return (1);
		if (*(unsigned char *)(s1 + i) < *(unsigned char *)(s2 + i))
			return (-1);
		i++;
	}
	return (0);
}
