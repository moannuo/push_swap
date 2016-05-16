/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:05:25 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/16 18:54:54 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int			ft_strisdigit(char *s)
{
	if (*s == '-')
		s++;
	while (*s)
	{
		if (!(ft_isdigit(*s)))
			return (0);
		s++;
	}
	return (1);
}
