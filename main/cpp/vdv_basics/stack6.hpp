/**
 * @file.
 *
 * @author J. Broeckhove - see copyright.txt
 */

#ifndef INC_BASICS_STACK6_HPP
#define INC_BASICS_STACK6_HPP

#include "stack6assign.hpp"
#include "stack6decl.hpp"
#include <deque>
#include <stdexcept>

template <typename T, typename CONT>
void Stack<T, CONT>::push(T const& elem)
{
	elems.push_back(elem);
}

template <typename T, typename CONT>
void Stack<T, CONT>::pop()
{
	if (elems.empty()) {
		throw std::out_of_range("Stack<>::pop(): empty stack");
	}
	elems.pop_back();
}

template <typename T, typename CONT>
T Stack<T, CONT>::top() const
{
	if (elems.empty()) {
		throw std::out_of_range("Stack<>::top(): empty stack");
	}
	return elems.back();
}

#endif // INC_BASICS_STACK6_HPP
