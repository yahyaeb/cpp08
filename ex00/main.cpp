/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 12:18:23 by yel-bouk          #+#    #+#             */
/*   Updated: 2025/09/13 13:22:35 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{

	std::vector<int>  tableau;

	for (int i = 0; i < 10; i++)
		tableau.push_back(i + 1);
	try
	{
		easyfind(tableau, 25);
		std::cout << "a match is found" << std::endl;
	}	
	catch(const std::exception &e)
	{
		std::cout << e.what() << "the number is not in the list\n";
	}
}
