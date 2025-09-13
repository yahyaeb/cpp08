/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 13:24:11 by yel-bouk          #+#    #+#             */
/*   Updated: 2025/09/13 16:38:27 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <exception>
#include <iostream>
#include <climits>
#include <cstdlib>

class Span
{
private:
    unsigned int _N;               // Capacity
    std::vector<int> _numbers;     // Store numbers

public:
    Span();
    Span(unsigned int N);
    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();

    void addNumber(int number);       // Add one number
    int shortestSpan() const;         // Return shortest span
    int longestSpan() const;          // Return longest span
};
