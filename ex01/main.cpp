/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 22:34:02 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/11 23:48:35 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	st("Carl");

	st.attack("Johny");
	st.attack("Johny");
	st.beRepaired(1);
	st.takeDamage(1);
	st.guardGate();
	return (0);
}