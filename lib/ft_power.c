/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/11 09:29:07 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/26 12:07:17 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long		ft_power(int nb, int exp)
{
	long	result;

	if (exp == 0)
		return (1);
	result = ft_power(nb, exp / 2);
	if (exp % 2 == 0)
		return (result * result);
	else
	{
		if (exp > 0)
			return (nb * result * result);
		else
			return (result * result) / nb;
	}
}
