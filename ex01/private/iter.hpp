/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:34:58 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/09/10 13:34:58 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstdlib>

template<typename T, typename U>
void	iter(T	*addr, size_t const size, U (*f)(T &))
{
	size_t	i;

	for (i = 0; i < size; i++)
		f(addr[i]);
}

#endif
