/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 10:39:37 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/04/19 10:39:38 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] != '\0')
		i++;
	if (s1[i] == '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			s1[i] = s2[j];
			i++;
			j++;
		}
		s1[i] = '\0';
	}
	return (s1);
}