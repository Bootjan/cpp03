/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 23:15:39 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/12 00:40:40 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

// #############################################################################
//		CON/DE STRUCTORS
// #############################################################################

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";

	FragTrap::_hitPts = 100;
	ScavTrap::_energyPts = 50;
	FragTrap::_attackDmg = 30;
	std::cout << "DiamondTrap " << this->_name << " is born" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " has left this world" << std::endl;
}


// #############################################################################
//		MEMBER FUNCTIONS
// #############################################################################

void	DiamondTrap::whoAmI(void)
{
	std::cout 	<< "This is DiamondTrap " << this->_name
				<< " with ClapTrap name " << ClapTrap::_name <<std::endl;
}
