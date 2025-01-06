/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 17:27:31 by moelalj           #+#    #+#             */
/*   Updated: 2025/01/06 17:16:28 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
void    easyfind(T cont, int num){
    typename T::iterator it; //It is necessary in templates because the compiler cannot determine whether T::iterator is a type or a value without the typename keyword.

    it = std::find(cont.begin(), cont.end(), num);
    if (*it == num)
        std::cout << "Found the number in the container: " << num << std::endl;
    else
        std::cout << "Cannot found the number " << num  << " in the container."<< std::endl;
}
#endif