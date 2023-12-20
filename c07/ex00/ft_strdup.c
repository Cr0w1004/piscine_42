/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:39:46 by alorru            #+#    #+#             */
/*   Updated: 2023/11/30 13:39:47 by alorru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int	i;
	
	i = 0;
	cpy[i] = malloc(sizeof(char *) * (strlen(src) + 1));
	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i++
	}
	cpy[i] = '\0';
	return(cpy);
}
