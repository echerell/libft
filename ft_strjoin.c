/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 16:07:04 by echerell          #+#    #+#             */
/*   Updated: 2021/04/23 16:08:57 by echerell         ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat;
	int		i;
	int		n2;

	i = 0;
	n2 = 0;
	cat = (char *)malloc((length(s1) + length(s2)) * sizeof(char));
	if (!s1 || !s2 || !cat)
		return (NULL);
	while (s1[i])
	{
		cat[i] = s1[i];
		i++;
	}
	while (s2[n2])
	{
		cat[i] = s2[n2];
		i++;
		n2++;
	}
	cat[i] = '\0';
	return (cat);
}
