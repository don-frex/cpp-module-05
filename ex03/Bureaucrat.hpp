/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 18:06:29 by asaber            #+#    #+#             */
/*   Updated: 2024/02/03 20:25:10 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

# include <iostream>
# include <stdexcept>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat& operator = (const Bureaucrat& other);
		~Bureaucrat();
		std::string	getName(void);
		int		getGrade(void) const;
		void	increment(void);
		void	decrement(void);
		void	executeForm(AForm const & form);
		// has an error in this memeber function!
		class GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};
};

#endif