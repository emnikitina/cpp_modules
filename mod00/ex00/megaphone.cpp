/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odomenic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 10:30:29 by odomenic          #+#    #+#             */
/*   Updated: 2021/08/26 20:48:51 by odomenic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc, char **argv)
{
	int i = 0;
	int j;

	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j] != '\0')
			std::cout << (char)toupper(argv[i][j]);
	}
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << "\n";
	return (0);
}
