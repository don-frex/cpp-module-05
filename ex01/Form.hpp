/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 15:24:08 by asaber            #+#    #+#             */
/*   Updated: 2024/01/12 18:24:26 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

# include <iostream>
# include <stdexcept>

class Form
{
	private:
		const std::string	name;
		bool	is_signed;
		const int	sign_required;
		const int	exec_required;
	public:
		Form();
		Form(std::string _name, bool _is_signed, const int _sign_required, const int _exec_required);
		Form(Form &other);
		~Form();
		std::string getname(void);
		bool getsigning(void);
		int getsign_required(void);
		int	getexec_required(void);
		void beSigned(Bureaucrat &Bureaucrat);
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
};

#endif