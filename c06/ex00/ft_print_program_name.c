/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:48:26 by alorru            #+#    #+#             */
/*   Updated: 2023/11/23 19:48:28 by alorru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_program_name(char *str)
{
	ft_putstr(str);
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	(void)ac;
	ft_print_program_name(av[0]);
	return (0);
}
