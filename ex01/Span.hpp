/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:26:21 by moelalj           #+#    #+#             */
/*   Updated: 2025/01/08 10:37:31 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <climits>

class Span{
    private:
       std::vector<int> myVector;
       unsigned int max_size;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span& rhs);
        Span& operator=(const Span& rhs);
        ~Span();

        void    addNumber(int number);
        void    addmanyNumbers(std::vector<int> vec);
        int     shortestSpan();
        int     longestSpan();

        void    print();
};
#endif