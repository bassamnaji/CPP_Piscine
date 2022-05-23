/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 12:47:37 by bnaji             #+#    #+#             */
/*   Updated: 2022/05/22 16:54:44 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <stdexcept>

class Span
{

	public:

		Span();
		Span(unsigned int n);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		unsigned int const &			getSize() const;
		std::vector<int> const &	getSpan() const;

		void						addNumber(int num);
		void						fillSpan(std::vector<int>::iterator it1, std::vector<int>::iterator it2, int n);
		unsigned int 		shortestSpan();
		unsigned int 		longestSpan();

		class IsFullException : public std::exception
		{
			public:
				virtual const char *	what() const throw();
		};

		class NotEnoughElementsException : public std::exception
		{
			public:
				virtual const char *	what() const throw();
		};

	private:
		unsigned int									_size;
		std::vector<int>							_span;
};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */