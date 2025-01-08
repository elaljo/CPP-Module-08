/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:31:00 by moelalj           #+#    #+#             */
/*   Updated: 2025/01/08 10:52:02 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){
    std::cout << "Default Constructor Called" << std::endl;
    max_size = 0;
}
Span::Span(unsigned int N){
    std::cout << "Constructor Called" << std::endl;
    myVector.reserve(N);
    max_size = N;
}
Span::Span(const Span& rhs){
    std::cout << "Copy Constructor Called" << std::endl;
    this->myVector = rhs.myVector;
    this->max_size = rhs.max_size;
}
Span& Span::operator=(const Span& rhs){
    std::cout << "Copy Assignment Operator Called" << std::endl;
    if (this != &rhs)
    {
        myVector = rhs.myVector;
        max_size = rhs.max_size;
    }
    return *this;
}
Span::~Span(){
    std::cout << "Destructor Called" << std::endl;
}

void    Span::addNumber(int number){
    if (myVector.size() >= max_size)
        throw "Can't add a new element. myVector is full";
    myVector.push_back(number);
}
void    Span::addmanyNumbers(std::vector<int> vec){
    std::vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++){
        addNumber(*it);
    }
}
int    Span::shortestSpan(){    
    if (myVector.size() <= 1)
        throw "no span can be found";
        
    std::vector<int>::iterator it;
    int max = INT_MAX;

    std::sort(myVector.begin(), myVector.end());
    for (it = myVector.begin(); it != myVector.end() - 1; it++)
    {
        if (max > *(it + 1) - *it)
            max = *(it + 1) - *it;
    }
    return max;
}
int     Span::longestSpan(){
    if (myVector.size() <= 1)
        throw "no span can be found";

    std::vector<int>::iterator it;
    int max = 0;
    
    std::sort(myVector.begin(), myVector.end());
    max = *(myVector.end() - 1) - *(myVector.begin());
    return max;
}

void    Span::print(){
    std::vector<int>::iterator it;
    for (it = myVector.begin(); it != myVector.end(); it++)
        std::cout << *it << std::endl;
}