/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:14:31 by bnaji             #+#    #+#             */
/*   Updated: 2022/05/23 07:13:01 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name("UNKOWN") , _grade(1)
{
	std::cout << this->_name << " Bureaucrat is created with grade " << this->_grade << std::endl;
}


Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) , _grade(grade)
{
	this->_toohigh();
	this->_toolow();
	std::cout << this->_name << " Bureaucrat is created" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _name(src.getName())
{
	*this = src;
	std::cout << "Bureaucrat is created as " << src.getName() << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << this->_name << " Bureaucrat is dead" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void					Bureaucrat::incrementGrade() {
	this->_grade--;
	this->_toohigh();
}
void					Bureaucrat::decrementGrade() {
	this->_grade++;
	this->_toolow();
}

const char *			Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

const char *			Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

void					Bureaucrat::_toohigh() {
	try {
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch (std::exception & e) {
		this->_grade = 1;
		std::cerr << RED << e.what() << RESET << std::endl;
	}
}

void					Bureaucrat::_toolow() {
	try {
		if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (std::exception & e) {
		this->_grade = 150;
		std::cerr << RED << e.what() << RESET << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	const &		Bureaucrat::getName() const { return (this->_name); }

int	const &				Bureaucrat::getGrade() const { return (this->_grade); }

/* ************************************************************************** */