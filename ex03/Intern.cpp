/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 23:30:50 by asaber            #+#    #+#             */
/*   Updated: 2024/03/29 16:05:48 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	
}
Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern& Intern::operator = (const Intern &other)
{
	(void)other;
	return (*this);
}

AForm* Forms_list(const std::string& target, const std::string& formType) {
    if (formType == "robotomy request") {
        return new RobotomyRequestForm(target);
    } else if (formType == "presidential pardon") {
        return new PresidentialPardonForm(target);
    } else if (formType == "shrubbery creation") {
        return new ShrubberyCreationForm(target);
    } else {
        return nullptr;
    }
}

AForm& Intern::makeForm(const std::string Fname, const std::string target)
{

	AForm *output = Forms_list(target, Fname);

	if (output != nullptr)
	{
		std::cout << "Intern creates " << Fname << std::endl;
		return (*output);
	}
	else
		throw std::runtime_error("Intern can't create " + Fname);
}

Intern::~Intern()
{
	
}