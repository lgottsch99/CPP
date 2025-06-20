/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 21:53:14 by Watanudon         #+#    #+#             */
/*   Updated: 2025/06/03 12:11:33 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include "Zombie.hpp"

//This function creates a zombie, names it, and makes it announce itself.
//on stack-> limited to function scope
void randomChump( std::string name )
{
	Zombie	random(name);
}

