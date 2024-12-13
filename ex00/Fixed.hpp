/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:32:40 by juitz             #+#    #+#             */
/*   Updated: 2024/12/13 13:50:23 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

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
		
		int	getRawBits(void) const;
		void setRawBits(int const raw);

};
