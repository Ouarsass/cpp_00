/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:48:47 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/09 21:37:51 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
# include <sstream>

phonebook::phonebook()
{
    phonebook::numbers = 0;
    std::cout << "     *** Welcom ***" << std::endl;
}

phonebook::~phonebook()
{
    std::cout << "your phonebook has ben closed" << std::endl;
}

void    phonebook::add()
{
    int i;
    size_t j;

    std::cout << "add your contact" << std::endl;
    if (this->numbers == 8)
    {
        i = 0;
        while (++i < this->numbers)
            this->contacts[i - 1] = this->contacts[i];
        this->numbers--;
    }
    this->contacts[this->numbers].add_contact();
    this->numbers++;
    j = 0;
    while(j < 8)
    {
        this->contacts[j].nbr = j + 1;
        j++;
    }
}

bool    digit(std::string string)
{
    int i = 0;

    while (string[i])
    {
        if (std::isdigit(string[i]) == 0)
            return false;
        i++;
    }
    return true;
}

void    phonebook::search()
{
    int i = 0;
    int nbr;
    std::string string;
    std::stringstream ss;

    std::cout << "*     INDEX| FIRST_NAME| LAST_NAME| NICKNAME    *" << std::endl;
    std::cout << "*************************************************" << std::endl;
    while(i < this->numbers)
    {
        this->contacts[i].print_contact();
        i++;
    }
    std::cout << "Enter Number: ";
    if(!(std::cin >> string || std::cin.good()))
    {
        std::cout << "Good bye";exit(0);
    }
    nbr = 0;
    if (!string.empty() && digit(string))
    {
        ss << string;
        ss >> nbr;
        if (nbr > 0 && nbr < 9 && nbr <= this->numbers)
		{
			this->contacts[nbr - 1].print_info(); 
		}
        else
             std::cout << "didn't fond it !" << std::endl;
    }
}
