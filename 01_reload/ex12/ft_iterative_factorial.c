/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpujades <cpujades@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:57:33 by cpujades          #+#    #+#             */
/*   Updated: 2023/09/10 19:45:50 by cpujades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = nb;
	if (r < 0 || r > 15)
		return (0);
	else if (r == 0 || r == 1)
		return (1);
	else
	{
		while (r > 1)
		{
			r--;
			nb *= r;
		}
	}
	return (nb);
}
