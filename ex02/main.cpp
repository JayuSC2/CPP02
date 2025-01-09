/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 19:15:52 by juitz             #+#    #+#             */
/*   Updated: 2025/01/07 14:24:39 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	Fixed  a(10);
	Fixed const b(Fixed( 5.05f ) * Fixed( 2 ));
	Fixed c(9);
	Fixed d(10);
	
	if (a > b)
		std::cout << "a is bigger than b" << std::endl;
	else if (a < b)
		std::cout << "b is bigger than a" << std::endl;
	else if (a == b)
		std::cout << "a and b are equal" << std::endl;
	else if (a != b)
		std::cout << "a and b are not equal" << std::endl;

	if (b >= a)
		std::cout << "b is bigger or equal to a" << std::endl;
	if (c <= a)
		std::cout << "c is smaller or equal to a" << std::endl;
	
	std::cout << "a + c: " << a + c << std::endl;
	std::cout << "a - c: " << a - c << std::endl;
	std::cout << "c / a: " << c / a << std::endl;
	std::cout << "c * a: " << c * a << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << " a pre-increment called" << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << " a post-increment called" << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	
	return (0);
}