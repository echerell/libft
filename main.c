/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:38:22 by echerell          #+#    #+#             */
/*   Updated: 2021/04/23 16:09:01 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("%s\n", ft_substr("this is a string", 5, 6));
	printf("%s\n", ft_strjoin("one", " plus two"));
	return (0);
}
