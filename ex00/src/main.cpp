/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 20:00:58 by tmatis            #+#    #+#             */
/*   Updated: 2021/08/27 20:07:04 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main(void)
{
	{
		int a = 0;
		int b = 5;
		double c = 0.0;
		double d = 5.5;

		std::cout << "max(a, b) = " << max(a, b) << std::endl;
		std::cout << "max(c, d) = " << max(c, d) << std::endl;
		std::cout << "before swap:" << std::endl;
		std::cout << "a = " << a << " b = " << b << std::endl;
		swap(a, b);
		std::cout << "after swap:" << std::endl;
		std::cout << "a = " << a << " b = " << b << std::endl;
	}
	{
		int a = 2;
		int b = 3;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
		return 0;
	}
}
