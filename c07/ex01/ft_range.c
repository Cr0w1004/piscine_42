/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:01:47 by alorru            #+#    #+#             */
/*   Updated: 2023/11/30 14:01:49 by alorru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char	str[11];
	int		i;

	i = 0;
	if (nb == 0)
		write(1, "0", 1);
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		while (nb > 0)
		{
			str[i++] = (nb % 10) + '0';
			nb /= 10;
		}
		while (i-- > 0)
			write(1, &str[i], 1);
	}
}



int	*ft_range(int min, int max)
{
	int	i;
	int	lung;
	int	*array;
	int	*result;
	
	lung = max - min;
	if (min >= max)
		return (NULL); 
	*result = (int *)malloc(lung * sizeof(int));
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	*array = ft_range(min, max);
	if (array != NULL)
	{
		while (i < max - min)
		{
			ft_putnbr(array[i])
			ft_putchar(' ');
			i++;
		}
		free(array);
		
		else
		{
			ft_putstr("ERRORE: min >= max/n");
		}
	}
	return (0);
}
