/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:37:52 by alorru            #+#    #+#             */
/*   Updated: 2023/11/19 14:37:54 by alorru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = (str[i] + 32);
		i++;
	}
	return (str);
}