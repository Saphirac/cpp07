/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:27:18 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/09/10 13:27:18 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template<typename T>
void	print(T &a)
{
	std::cout << a << '\n';
}

template<typename T>
void	increment(T &a)
{
	a++;
}

int main(void)
{
	int	tab[6] = {0, 5, 9, 4, 2, 6};

	std::cout << "original tab : \n";
	::iter<int>(tab, 6, &print<int>);
	::iter<int>(tab, 6, &increment<int>);

	std::cout << "\nincremented tab : \n";
	::iter<int>(tab, 6, &print<int>);
	return 0;
}
