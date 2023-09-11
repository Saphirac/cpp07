/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:14:09 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/09/11 19:03:23 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

static void	__test0(void)
{
	Array<int>	a(2);

	std::cout << a << std::endl;
}

static void	__test1(void)
{
	Array<short>	a(3);

	std::cout << a << std::endl;
}

static void	__test2(void)
{
	Array<long>	a(4);

	std::cout << a << std::endl;
}

static void	__test3(void)
{
	Array<double>	a(5);

	std::cout << a << std::endl;
}

static void	__test4(void)
{
	Array<std::string>	a(6);

	std::cout << a << std::endl;
}

static void	__test5(void)
{
	Array<int>	a(2);

	try
	{
		std::cout << a[3] << '\n';
	}
	catch (std::exception &e)
	{
		e.what();
	}
	std::cout << a << std::endl;
}

int	main(void)
{
	__test0();
	std::cout << "-----------------------------------------------" << std::endl;
	__test1();
	std::cout << "-----------------------------------------------" << std::endl;
	__test2();
	std::cout << "-----------------------------------------------" << std::endl;
	__test3();
	std::cout << "-----------------------------------------------" << std::endl;
	__test4();
	std::cout << "-----------------------------------------------" << std::endl;
	__test5();
	return EXIT_SUCCESS;
}
