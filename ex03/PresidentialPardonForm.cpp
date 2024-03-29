/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 23:30:54 by asaber            #+#    #+#             */
/*   Updated: 2024/03/28 23:54:31 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("defualt", false, 25, 5), target("defult")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : AForm(_target, false, 25, 5), target(_target)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other) : AForm(other.target, other.getsigning(), other.getsign_required(), other.getexec_required()), target(other.target)
{

}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& other)
{
	this->target = other.target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > getexec_required())
		throw AForm::GradeTooLowException();
	std::cout << getname() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

std::ostream& operator << (std::ostream& out, PresidentialPardonForm& form)
{
	out << "PresidentialPardonForm " << form.getname() << " is " << (form.getsigning() ? "" : "not ") << "signed" << std::endl;	
	return (out);
}