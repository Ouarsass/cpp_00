/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:50:38 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/09 21:38:14 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

int main()
{
    std::string string;
    phonebook	book;

    while (true)
    {
        std::cout << "type your choice [ ADD |OR| SEARCH |OR| EXIT ]: ";
        std::cin >> string;
        if (string == "EXIT")
            return 0;
        else if (string == "ADD")
			book.add();
		else if (string == "SEARCH")
			book.search();
		else if (std::cin.eof() == 1)
			return 0;
    }
    return 0;
}
