/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:27:24 by asaber            #+#    #+#             */
/*   Updated: 2024/03/20 15:17:51 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), is_signed(false), sign_required(150), exec_required(150)
{
	
}

Form::Form(std::string _name, bool _is_signed, const int _sign_required, const int _exec_required) : name(_name), is_signed(_is_signed), sign_required(_sign_required), exec_required(_exec_required)
{
	if (this->sign_required > 150 || this->exec_required > 150)
		throw GradeTooHighException(); 
	else if (this->sign_required < 1 || this->exec_required < 1)
		throw GradeTooLowException();
}

void Form::beSigned(Bureaucrat &Bureaucrat)
{
	if (Bureaucrat.getGrade() > this->getsign_required())
		throw GradeTooLowException();
	this->is_signed = true;
	std::cout << "'" << Bureaucrat.getName() << "'" << " signed " << this->getname() << std::endl;
		
}
Form::Form(Form &other) : name(other.name), is_signed(other.is_signed), sign_required(other.sign_required), exec_required(other.exec_required)
{
	
}

std::string Form::getname(void) const
{
	return this->name;
}

bool Form::getsigning(void) const
{
	return this->is_signed;
}

int	Form::getsign_required(void) const
{
	return this->sign_required;
}

int Form::getexec_required(void) const
{
	return this->exec_required;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "the grade of Form is too high! ";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "the grade of Form is too low! ";
}

Form::~Form()
{
}

std::ostream& operator << (std::ostream& out, const Form o_form)
{
	out << "form : " << o_form.getname() << ", signinig state: " << o_form.getsigning() << ", grade to exucut " << o_form.getexec_required() << std::endl;
	return out;
}
