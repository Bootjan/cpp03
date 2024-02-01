/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 22:15:11 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/11 22:35:00 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	ct("John");

	for (int i = 0; i < 9; i++)
		ct.attack("John");
	for (int i = 0; i < 2; i++)
		ct.takeDamage(4);
	for (int i = 0; i < 4; i++)
		ct.beRepaired(3);
	ct.beRepaired(1);
	return (0);
}
