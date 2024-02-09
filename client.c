/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-masc <pde-masc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:22:09 by pde-masc          #+#    #+#             */
/*   Updated: 2024/02/09 18:42:51 by pde-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		ft_printf("Input Error\nCorrect Format: ./client (PID) (MESSAGE_TO_SEND)\n");
		exit(1);
	}
	ft_printf("pid: %d\n", ft_atoi(argv[1]));
	return (0);
}
