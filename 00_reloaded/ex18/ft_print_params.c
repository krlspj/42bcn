/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpujades <cpujades@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:09:29 by cpujades          #+#    #+#             */
/*   Updated: 2023/09/10 19:49:10 by cpujades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char h);

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	a = 1;
	b = 0;
	while (a < argc)
	{
		while (argv[a][b])
		{
			ft_putchar(argv[a][b]);
			b++;
		}
		ft_putchar('\n');
		b = 0;
		a++;
	}
	return (0);
}
