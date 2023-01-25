/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 21:38:00 by mouarsas          #+#    #+#             */
/*   Updated: 2023/01/09 21:38:01 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class phonebook
{
private:
    contact contacts[8];
    int numbers;
public:
    phonebook();
    ~phonebook();
    void    add();
    void    search();
    void    print();
};

#endif