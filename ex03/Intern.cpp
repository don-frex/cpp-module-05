/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 23:30:50 by asaber            #+#    #+#             */
/*   Updated: 2024/03/22 22:16:09 by asaber           ###   ########.fr       */
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

AForm* Forms_list(std::string target)
{
	AForm** list = new AForm*[3];
	
	list[0] = new RobotomyRequestForm(target);
	list[1] = new PresidentialPardonForm(target);
	list[2] = new ShrubberyCreationForm(target);
	return (*list);
}

void	delform(AForm **del_list)
{
	for(int i = 0; i < 3; i++)
	{
		delete del_list[i];
	}
}

AForm& Intern::makeForm(const std::string Fname, const std::string target)
{

	AForm *output = NULL;
	std::string str_list[] = {"robotomy request", "presidential pardon", "shrubbery creation"};

	for (int i = 0; i < 3; i++)
	{
		if (str_list[i] == Fname)
		{
			output = Forms_list(target);
			std::cout << "Intern creates " << Fname << std::endl;
			return (output[i]);
		}
	}
	std::cerr << "Intern can't create " << Fname << std::endl;
	return (*output);
}

Intern::~Intern()
{
	
}