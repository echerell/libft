/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:37:52 by echerell          #+#    #+#             */
/*   Updated: 2021/04/23 16:15:40 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int	length(const char *s)
{
	int	n;

	n = 0;
	while (s[n])
		n++;
	return (n);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		k;

	i = 0;
	trim = (char *)malloc(length(s1) * sizeof(char));
	if (!s1 || !trim)
		return (NULL);
	while (s1[i])
	{
		k = 0;
		while (set[k])
		{
			if (s1[i] == set[k])
			{
				i++;
				k = 0;
			}
			k++;
		}
	}
}
