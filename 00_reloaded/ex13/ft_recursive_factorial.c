/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpujades <cpujades@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:59:21 by cpujades          #+#    #+#             */
/*   Updated: 2023/09/10 19:46:11 by cpujades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 0 && nb <= 15)
	{
		if (nb == 0 || nb == 1)
			return (1);
		else
			return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}
