/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 22:15:23 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/12 00:23:04 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// #############################################################################
//		CON/DE STRUCTORS
// #############################################################################

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPts = 10;
	this->_energyPts = 10;
	this->_attackDmg = 0;
	std::cout << "ClapTrap " << this->_name << " is born" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &original)
{
	this->_name = original._name;
	this->_hitPts = original._hitPts;
	this->_energyPts = original._energyPts;
	this->_attackDmg = original._attackDmg;
	std::cout << "ClapTrap " << this->_name << " has been copied" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " has left this world" << std::endl;
}


// #############################################################################
//		MEMBER FUNCTIONS
// #############################################################################

ClapTrap&	ClapTrap::operator=(const ClapTrap& original)
{
	this->_name = original._name;
	this->_hitPts = original._hitPts;
	this->_energyPts = original._energyPts;
	this->_attackDmg = original._attackDmg;
	std::cout << "ClapTrap " << this->_name << " has been copied with assignment operator" << std::endl;
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPts > 0 && this->_hitPts > 0)
	{
		std::cout 	<< "ClapTrap " << this->_name
					<< " attacks " << target
					<< ", causing " << this->_attackDmg
					<< " points of damage!" << std::endl;
		this->_energyPts--;
	}
	else if (this->_hitPts > 0)
		std::cout 	<< "ClapTrap " << this->_name
					<< " is burned out" << std::endl;
	else
		std::cout	<< "ClapTrap " << this->_name
					<< " has already died" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPts > 0)
	{
		std::cout 	<< "ClapTrap " << this->_name
					<< " has taken " << (amount > this->_hitPts ? this->_hitPts : amount)
					<< " points of damage" << std::endl;
		this->_hitPts = amount >= this->_hitPts ? 0 : this->_hitPts - amount;
	}
	else
		std::cout	<< "ClapTrap " << this->_name
					<< " has already died" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPts > 0 && this->_hitPts > 0)
	{
		this->_hitPts += amount;
		this->_energyPts--;
		std::cout	<< "ClapTrap " << this->_name
					<< " is repaired by " << amount
					<< " points" << std::endl;
	}
	else if (this->_hitPts > 0)
		std::cout	<< "ClapTrap " << this->_name
					<< " is burned out" << std::endl;
	else
		std::cout	<< "ClapTrap " << this->_name
					<< " has already died" << std::endl;
}
