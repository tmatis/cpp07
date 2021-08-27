/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 20:08:11 by tmatis            #+#    #+#             */
/*   Updated: 2021/08/27 20:10:53 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP

# include <stdlib.h>

# define ITER_HPP

template <typename T>
void iter(T *arr, size_t size, void (*f)(T &))
{
	for (size_t i = 0; i < size; i++)
		f(arr[i]);
}

#endif
