/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:40:19 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/09 21:37:36 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void    contact::add_contact()
{
    std::cout << "Frist Name ";
    if(!(std::cin >> first_name) || !(std::cin.good()))
    {
        std::cout << "good bye";exit(0);
    }
    std::cout << "Last Name ";
    if(!(std::cin >> last_name) || !(std::cin.good()))
    {
        std::cout << "good bye";exit(0);
    }
    std::cout << "Nick Name ";
    if(!(std::cin >> nick_name) || !(std::cin.good()))
    {
        std::cout << "good bye";exit(0);
    }
    std::cout << "Phone Number ";
    if(!(std::cin >> phone_number) || !(std::cin.good()))
    {
        std::cout << "good bye";exit(0);
    }
    std::cout << "Darkest Secret: ";
    if(!(std::cin >> darkest_secret) || !(std::cin.good()))
    {
        std::cout << "good bye";exit(0);
    }
}
void    contact::display(std::string string)
{
    int counter;
    int i;

    counter = string.size();
    while(counter < 10)
    {
        std::cout << " ";
        counter++;
    }
    i = 0;
    while(string[i] && i < 10)
    {
        if (i == 9 && string.size() > 10)
            std::cout << '.';
        else
            std::cout << string[i];
        i++;
    }
}

void    contact::print_contact()
{
    std::cout << "*";
    std::cout << "          " << this->nbr;
    std::cout << "|";
    this->display(this->first_name);
    std::cout << "|";
    this->display(this->last_name);
    std::cout << "|";
    this->display(this->nick_name);
    std::cout << "    *";
    std::cout << std::endl;
}

void contact::print_info()
{
	std::cout << "Index: " << nbr<< std::endl;
	std::cout << "First Name: " << first_name << std::endl;
	std::cout << "Last Name: " << last_name << std::endl;
	std::cout << "Nick Name: " << nick_name << std::endl;
	std::cout << "Phone Number: " << phone_number << std::endl;
	std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}
