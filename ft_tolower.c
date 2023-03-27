/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:31:44 by ggulteki          #+#    #+#             */
/*   Updated: 2022/12/28 16:06:16 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c += 32);
	}
	else
	{
		return (c);
	}
}
/*
int main(void)
{
	char	s1[] = "GOKBERK";
	size_t  i = 0;

	printf("before: %s\n", s1);

	while(s1[i] != '\0')
	{
		s1[i] = (char)ft_tolower((int)s1[i]);
		i++;
	}

	printf("after: %s\n", s1);
}
*/
