/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:14:09 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/09/12 17:06:34 by mcourtoi         ###   ########.fr       */
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
	Array<std::string>	b(4);

	for (int i = 0; i < 4; i++)
		b[i] = "before";
	std::cout << "b : " << b << std::endl;
	for (int i = 0; i < 6; i++)
		a[i] = "test";
	b = a;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;

	try {	
		std::cout << "exception : " << b[7] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
}

static void	__test5(void)
{
	Array<int>	a;

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
