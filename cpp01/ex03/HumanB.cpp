/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 21:41:31 by bnaji             #+#    #+#             */
/*   Updated: 2022/04/30 23:27:24 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanB::HumanB(std::string name) : _name(name)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

HumanB::~HumanB()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	HumanB::attack(void) const {
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void		HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

/* ************************************************************************** */