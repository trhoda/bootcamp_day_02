/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 08:36:39 by trhoda            #+#    #+#             */
/*   Updated: 2020/06/23 09:38:43 by trhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2);

int ft_strcmp(char *s1, char *s2)
{
	int i;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])	{ return 1;}
		else if (s1[i] < s2[i])	{ return -1;}
		i++;
	}
	if (s1[i] == '\0' && s2[i] != '\0')	{ return -1}
	else if (s1[i] != '\0' && s2[i] == '\0') { return 1}
	else { return 0 }
}
