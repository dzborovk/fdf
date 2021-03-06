/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzborovk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 11:13:23 by dzborovk          #+#    #+#             */
/*   Updated: 2017/11/03 12:08:37 by dzborovk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	while (s1[i])
		i++;
	while (s2[i2])
	{
		s1[i] = s2[i2];
		i2++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
