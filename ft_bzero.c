/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:17:15 by ggulteki          #+#    #+#             */
/*   Updated: 2023/01/30 18:14:46 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*i;

	i = s;
	while (n > 0)
	{
		*i = '\0';
		n--;
		i++;
	}
}
/*
int main(void)
{
  char s[] = "deneme";

  ft_bzero(s, 3);
}
*/