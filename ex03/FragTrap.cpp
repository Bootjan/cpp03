/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 22:42:29 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/11 23:51:35 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// #############################################################################
//		CON/DE STRUCTORS
// #############################################################################

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_attackDmg = 30;
	std::cout << "FragTrap " << this->_name << " is born" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " has left this world" << std::endl;
}


// #############################################################################
//		MEMBER FUNCTIONS
// #############################################################################

void	FragTrap::highFivesGuys(void)
{
	std::cout 	<< "FragTrap " << this->_name
				<< " just gave you a highfive!" << std::endl;
}
