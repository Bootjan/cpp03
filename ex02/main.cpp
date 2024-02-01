/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 22:46:34 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/12 00:33:21 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	ft("Peter");
	FragTrap	ft2(ft);
	ft2 = ft;

	ft.attack("Twan");
	ft2.attack("Twan");
	ft.beRepaired(1);
	ft.takeDamage(1);
	ft.highFivesGuys();
	return (0);
}
