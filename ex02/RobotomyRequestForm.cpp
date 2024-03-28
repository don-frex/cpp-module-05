/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:06:05 by asaber            #+#    #+#             */
/*   Updated: 2024/03/28 23:24:16 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("defualt", false, 72, 45), target("defult")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : AForm(_target, false, 72, 45), target(_target)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other) : AForm(other.target, other.getsigning(), other.getsign_required(), other.getexec_required()), target(other.target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	static int check;

	if (executor.getGrade() > this->getexec_required())
		throw AForm::GradeTooLowException();
	// check = rand() % 2; not working!!!!
	if (check++ % 2)
		std::cout << getname() << " has been robotomized successfull!" << std::endl;
	else
		std::cout << getname() << " robotomy failed!" << std::endl;
}

// for << operator
std::ostream& operator << (std::ostream& out, RobotomyRequestForm& form)
{
	out << "RobotomyRequestForm " << form.getname() << " is " << (form.getsigning() ? "" : "not ") << "signed" << std::endl;
	return (out);
}