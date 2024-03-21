/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:27:24 by asaber            #+#    #+#             */
/*   Updated: 2024/01/12 18:26:50 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("default"), is_signed(false), sign_required(150), exec_required(150)
{
	
}

AForm::AForm(std::string _name, bool _is_signed, const int _sign_required, const int _exec_required) : name(_name), is_signed(_is_signed), sign_required(_sign_required), exec_required(_exec_required)
{
	if (this->sign_required > 150 || this->exec_required > 150)
		throw GradeTooHighException(); 
	else if (this->sign_required < 1 || this->exec_required < 1)
		throw GradeTooLowException();
}

AForm& AForm::operator = (AForm& copy)
{
	this->is_signed = copy.is_signed;
	return (*this);
}

void AForm::beSigned(Bureaucrat &Bureaucrat) const
{
	if (Bureaucrat.getGrade() > this->getsign_required())
		throw GradeTooLowException();
	//this->is_signed = 1;
	std::cout << "'" << Bureaucrat.getName() << "'" << " signed " << this->getname() << std::endl;
		
}
AForm::AForm(AForm &other) : name(other.name), is_signed(other.is_signed), sign_required(other.sign_required), exec_required(other.exec_required)
{
	
}

std::string AForm::getname(void) const
{
	return this->name;
}

bool AForm::getsigning(void) const
{
	return this->is_signed;
}

int	AForm::getsign_required(void) const
{
	return this->sign_required;
}

int AForm::getexec_required(void) const
{
	return this->exec_required;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "the grade of AForm is too high! ";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "the grade of AForm is too low! ";
}

AForm::~AForm()
{
	//std::cout << "AForm Destroyed" << std::endl;
}

std::ostream& operator << (std::ostream& out, const AForm& o_form)
{
	out << "form : " << o_form.getname() << ", signinig state: " << o_form.getsigning() << ", grade to exucut " << o_form.getexec_required() << std::endl;
	return out;
}