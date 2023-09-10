/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:23:37 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/09/10 13:23:37 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_H
# define TEMPLATE_H

template<typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T const	&min(T const &a, T const &b)
{
	if (a < b)
		return a;
	return b;
}

template<typename T>
T const	&max(T const &a, T const &b)
{
	if (a > b)
		return a;
	return b;
}

#endif
