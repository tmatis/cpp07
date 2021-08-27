/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 20:07:45 by tmatis            #+#    #+#             */
/*   Updated: 2021/08/27 20:15:49 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void plus_one_int(int &i)
{
	i++;
}

void plus_one_double(double &d)
{
	d++;
}

int main(void)
{
	{
		int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

		std::cout << "Before: ";
		for (int i = 0; i < 10; i++)
			std::cout << arr[i] << " ";
		iter(arr, 10, plus_one_int);
		std::cout << std::endl
				  << "After: ";
		for (int i = 0; i < 10; i++)
			std::cout << arr[i] << " ";
		std::cout << std::endl;
	}
	{
		double arr[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0};

		std::cout << "Before: ";
		for (int i = 0; i < 10; i++)
			std::cout << arr[i] << " ";
		iter(arr, 10, plus_one_double);
		std::cout << std::endl << "After: ";
		for (int i = 0; i < 10; i++)
			std::cout << arr[i] << " ";
		std::cout << std::endl;	
	}
}
