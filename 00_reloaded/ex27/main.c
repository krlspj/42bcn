/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpujades <cpujades@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:55:29 by cpujades          #+#    #+#             */
/*   Updated: 2023/09/12 00:57:10 by cpujades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c, int std)
{
	write(std, &c, 1);
}

void	ft_putstr(char *str, int std)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++], std);
}

int	show_char(char **argv)
{
	int		fd;
	int		ret;
	char	temp[1];

	ret = 1;
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (0);
	while (ret > 0)
	{
		ret = read(fd, temp, 1);
		if (ret == -1)
			return (0);
		if (ret > 0)
			ft_putchar(temp[0], 1);
	}
	ret = close(fd);
	if (ret == -1)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n", 2);
	else if (argc == 2)
	{
		if (show_char(argv) == 0)
			return (0);
	}
	else
		ft_putstr("Too many arguments.\n", 2);
	return (0);
}
