/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 13:11:47 by hgutterr          #+#    #+#             */
/*   Updated: 2026/06/03 16:34:13 by hgutterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter( void ) {
	// std::cout << "Character Default constructor" << std::endl;
}

ICharacter::ICharacter( std::string name ) {
	// std::cout << "Character Default constructor" << std::endl;
}

ICharacter::ICharacter( const ICharacter& other )
{

}

ICharacter& ICharacter::operator=( const ICharacter& other )
{

}

ICharacter::~ICharacter()
{

}

const std::string&	ICharacter::getName() const
{

}

void				ICharacter::equip( AMateria* m )
{

}

void				ICharacter::unequip( int idx )
{
	
}

void				ICharacter::use( int idx, ICharacter& target )
{

}
