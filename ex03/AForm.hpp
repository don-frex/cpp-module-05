/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 15:24:08 by asaber            #+#    #+#             */
/*   Updated: 2024/03/28 23:48:51 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
# include <iostream>
# include <stdexcept>

class Bureaucrat;

class AForm
{
	private:
		const std::string	name;
		bool	is_signed;
		const int	sign_required;
		const int	exec_required;
	public:
		AForm();
		AForm(std::string _name, bool _is_signed, const int _sign_required, const int _exec_required);
		AForm(AForm &other);
		virtual ~AForm();
		AForm& operator = (AForm& copy);
		std::string getname(void) const;
		bool getsigning(void) const;
		int getsign_required(void) const;
		int	getexec_required(void) const;
		void beSigned(Bureaucrat &Bureaucrat) const;
		virtual void execute(Bureaucrat const &executor) const = 0;
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class NotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw() { return ("Form not signed");};
		};
};

std::ostream& operator << (std::ostream& out, const AForm& o_form);

#endif