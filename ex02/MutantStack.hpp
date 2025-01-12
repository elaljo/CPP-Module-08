/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 22:09:49 by moelalj           #+#    #+#             */
/*   Updated: 2025/01/12 23:06:13 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename MutantStack::iterator ite;

        MutantStack(){
            std::cout << "Default Constructor Called" << std::endl;
        }
        MutantStack(const MutantStack& rhs){
            std::cout << "Copy Constructor Called" << std::endl;
            this->c = rhs.c;
        }
        MutantStack& operator=(const MutantStack& rhs){
            std::cout << "Copy Assignment Operator Called" << std::endl;
            if (this != &rhs){
                this->c = rhs.c;
            }
            return *this;
        }
        ~MutantStack(){
            std::cout << "Destructor Called" << std::endl;
        }
        iterator begin(){
            return this->c.begin();
        }
        iterator end(){
            return this->c.end();
        }
        void    print(){
            for (ite it = this->begin(); it != this->end(); it++){
                std::cout << "data: " << *it << std::endl;
            }
        }
    
};
#endif