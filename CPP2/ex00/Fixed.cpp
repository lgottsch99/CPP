/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:50:41 by lgottsch          #+#    #+#             */
/*   Updated: 2025/06/03 16:42:48 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

//constructor for static member
const int Fixed::_bit = 8;

Fixed::Fixed(void): _value(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

//copy constructor
Fixed::Fixed(const Fixed& ex)
{
	std::cout << "Copy constructor called\n";
	this->_value = ex.getRawBits();
}

//copy assignment operator
//not a construction ft! so no list
Fixed &Fixed::operator=(const Fixed &e)
{
	std::cout << "Copy assignment operator called\n";
	this->_value = e.getRawBits();
	return (*this);
}

//returns the raw value of the fixed-point value
int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
	return ;
}
