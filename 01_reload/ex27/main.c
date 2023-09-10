/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpujades <cpujades@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:40:23 by cpujades          #+#    #+#             */
/*   Updated: 2023/09/10 20:02:41 by cpujades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_puterr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_display(char *av)
{
	int		fd;
	int		ret;
	char	buf[BUFF_SIZE + 1];

	fd = open(av, O_RDONLY);
	if (fd == -1)
		return ;
	ret = read(fd, buf, BUFF_SIZE);
	while (ret)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	close(fd);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		ft_puterr("File name missing.\n");
	else if (ac > 2)
		ft_puterr("Too many arguments.\n");
	else
	{
		ft_display(av[1]);
	}
	return (0);
}