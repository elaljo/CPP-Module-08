/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 04:58:00 by moelalj           #+#    #+#             */
/*   Updated: 2025/01/08 11:34:17 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(){
    Span s(5);
    // std::vector<int> vec;
    // vec.push_back(6);
    // vec.push_back(3);
    try{
        s.addNumber(6);
        s.addNumber(3);
        s.addNumber(17);
        s.addNumber(9);
        s.addNumber(11);
        // s.addmanyNumbers(vec);
        std::cout << s.shortestSpan() << std::endl;
        std::cout << s.longestSpan() << std::endl;
    }
    catch (const char* err){
        std::cout << err << std::endl;
    }
    return (0);
}