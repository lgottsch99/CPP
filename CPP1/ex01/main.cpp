/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 22:30:43 by Watanudon         #+#    #+#             */
/*   Updated: 2025/05/29 17:21:50 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include "Zombie.hpp"


Zombie* zombieHorde( int N, std::string name );

int main (void)
{
	Zombie *horde;

	horde = NULL;
	horde = zombieHorde(5, "sybille");


	delete [] horde;
	return 0;
}