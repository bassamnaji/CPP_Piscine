/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:28:11 by bnaji             #+#    #+#             */
/*   Updated: 2022/05/18 12:25:19 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main () {
	Bureaucrat				bureaucrat("Ana", 6);
	ShrubberyCreationForm	form1("home");
	RobotomyRequestForm		form2("XL20");
	PresidentialPardonForm	form3("Bnaji");
	
	std::cout << bureaucrat << std::endl;
	bureaucrat.signForm(form1);
	bureaucrat.executeForm(form1);
	bureaucrat.signForm(form2);
	bureaucrat.executeForm(form2);
	bureaucrat.executeForm(form2);
	bureaucrat.executeForm(form3);
	bureaucrat.signForm(form3);
	bureaucrat.executeForm(form3);
	bureaucrat.incrementGrade();
	bureaucrat.executeForm(form3);
}
