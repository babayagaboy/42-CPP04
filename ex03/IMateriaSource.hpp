/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 17:42:23 by hgutterr          #+#    #+#             */
/*   Updated: 2026/06/03 17:45:19 by hgutterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource {
	public:
		IMateriaSource( void );
		virtual ~IMateriaSource( void );
		virtual void learnMateria( AMateria* ) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif