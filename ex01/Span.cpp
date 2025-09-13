/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 13:24:06 by yel-bouk          #+#    #+#             */
/*   Updated: 2025/09/13 16:38:34 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span() : _N(0) {};

Span::Span(unsigned int N) : _N(N) {};

Span::Span(const Span& other) : _N(other._N) {};

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_N = other._N;
	}
	return *this;
};

Span::~Span() {};

void Span::addNumber(int number) {
	if (_numbers.size() >= _N) {
		throw std::out_of_range("Cannot add more numbers, capacity reached.");
	}
	_numbers.push_back(number);
};

int Span::shortestSpan(void) const
{
	if (_numbers.size() < 2)
	{
		throw std::logic_error("Not enough numbers to find a span.");
	}
	int minSpan = INT_MAX;
	for (size_t i = 0; i < _numbers.size(); ++i)
	{
		for (size_t j = i + 1; j < _numbers.size(); ++j)
		{
			int span = std::abs(_numbers[i] - _numbers[j]);
			if (span < minSpan)
			{
				minSpan = span;
			}
		}
	}
	return minSpan;
};

int Span::longestSpan(void) const
{
	if (_numbers.size() < 2)
	{
		throw std::logic_error("Not enough numbers to find a span.");
	}
	int maxSpan = INT_MIN;
	for (size_t i = 0; i < _numbers.size(); ++i)
	{
		for (size_t j = i + 1; j < _numbers.size(); ++j)
		{
			int span = std::abs(_numbers[i] - _numbers[j]);
			if (span > maxSpan)
			{
				maxSpan = span;
			}
		}
	}
	return maxSpan;
};



