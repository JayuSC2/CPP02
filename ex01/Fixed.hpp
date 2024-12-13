/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:05:20 by juitz             #+#    #+#             */
/*   Updated: 2024/12/13 19:06:05 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int					value;
		static const int	fract_bits;

	public:
		Fixed();
		Fixed(const int &value);
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &other);
		//std::ostream &operator<<(std::ostream &out, const Fixed &fPoint);
		
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int	toInt(void) const;
		void print(std::ostream &out) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fPoint);