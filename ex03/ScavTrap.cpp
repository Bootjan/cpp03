/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 22:31:23 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/12 00:27:38 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// #############################################################################
//		CON/DE STRUCTORS
// #############################################################################

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPts = 100;
	this->_energyPts = 50;
	this->_attackDmg = 20;
	std::cout << "ScavTrap " << this->_name << " is born" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " has left this world" << std::endl;
}


// #############################################################################
//		MEMBER FUNCTIONS
// #############################################################################

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPts > 0 && this->_hitPts > 0)
	{
		std::cout 	<< "ScavTrap " << this->_name
					<< " attacks " << target
					<< ", causing " << this->_attackDmg
					<< " points of damage!" << std::endl;
		this->_energyPts--;
	}
	else if (this->_hitPts > 0)
		std::cout 	<< "ScavTrap " << this->_name
					<< " is burned out" << std::endl;
	else
		std::cout	<< "ScavTrap " << this->_name
					<< " has already died" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout 	<< "ScavTrap " << this->_name
				<< " is now in gate keeper mode" << std::endl;
}
