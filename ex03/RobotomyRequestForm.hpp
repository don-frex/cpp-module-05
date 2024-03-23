/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:59:49 by asaber            #+#    #+#             */
/*   Updated: 2024/02/03 15:11:55 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string _target);
		RobotomyRequestForm(RobotomyRequestForm &other);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator = (RobotomyRequestForm& copy);
		void execute(Bureaucrat const &executor);
};

// for << operator
std::ostream& operator << (std::ostream& out, RobotomyRequestForm& form);

#endif