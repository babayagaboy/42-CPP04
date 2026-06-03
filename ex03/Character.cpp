/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 14:12:13 by hgutterr          #+#    #+#             */
/*   Updated: 2026/06/03 16:27:14 by hgutterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) : ICharacter("Default")
{
	// std::cout << "Character Default constructor" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
}

Character::Character( std::string name )
{
	// std::cout << "Character Default constructor" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
}

Character::Character( const Character& other ) : ICharacter(*this)
{
	// std::cout << "Character Copy constructor" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
	*this = other;
}

Character& Character::operator=( const Character& other )
{
	// std::cout << "Character Copy assignment" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i]) { delete this->_inventory[i]; }
			this->_inventory[i] = (other._inventory[i]) ? other._inventory[i]->clone() : NULL;
		}
	}
	return (*this);
}

Character::~Character( void )
{
	// std::cout << "Character Destructor" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i]) { delete this->_inventory[i]; }
		this->_inventory[i] = NULL;
	}
	
}

const std::string&	Character::getName() const {
	return (this->_name);
}

void				Character::equip( AMateria* m )
{
	for (int i = 0; i < 4; ++i)	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
}

void				Character::unequip( int idx ) {
	if (idx > 0 && idx < 4) { this->_inventory[idx] = NULL; }
}

void				Character::use( int idx, ICharacter& target )
{
	if (idx > 0 && idx < 4 && this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}
