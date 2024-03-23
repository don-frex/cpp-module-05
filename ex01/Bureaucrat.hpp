/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 18:06:29 by asaber            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/03/23 17:35:59 by asaber           ###   ########.fr       */
=======
/*   Updated: 2024/03/19 22:49:35 by asaber           ###   ########.fr       */
>>>>>>> aca51779f85fb9a3e41f8a618d59f5ff398e5b4c
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

# include <iostream>
# include <stdexcept>
# include "Form.hpp"


class	Form;
class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat &other);
		Bureaucrat(std::string name, int grade);
		Bureaucrat& operator = (const Bureaucrat& other);
		~Bureaucrat();
		std::string	getName(void) const;
		int		getGrade(void) const;
		void	increment(void);
		void	decrement(void);
		void	signForm(Form& form);
		class GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};
};

std::ostream&   operator<<(std::ostream& out, const Bureaucrat& bur);

#endif