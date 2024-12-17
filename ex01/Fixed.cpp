/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:06:57 by juitz             #+#    #+#             */
/*   Updated: 2024/12/17 14:00:34 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fract_bits = 8;

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int &value) : value(value << fract_bits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float &value) : value(static_cast<int>(roundf(value * (1 << fract_bits))))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->value = other.value;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	value = raw;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(value) / (1 << fract_bits));
}

int	Fixed::toInt(void) const
{
	return (value >> fract_bits);
}

void Fixed::print(std::ostream &out) const
{
    out << toFloat();
}

std::ostream &operator<<(std::ostream &out, const Fixed &fPoint)
{
	fPoint.print(out);
	return (out);
}