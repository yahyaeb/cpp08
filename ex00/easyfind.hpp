/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 11:58:27 by yel-bouk          #+#    #+#             */
/*   Updated: 2025/09/13 13:21:21 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind (T& containor, int i)
{
	typename T::iterator iter;
	for(iter = containor.begin(); iter != containor.end(); iter++)
	{
		if(*iter == i)
			return iter;
	}
	throw std::runtime_error("object not found: ");
}


