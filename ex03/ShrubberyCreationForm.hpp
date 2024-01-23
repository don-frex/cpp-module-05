/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:48:28 by asaber            #+#    #+#             */
/*   Updated: 2024/01/19 21:05:30 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string Target);
		ShrubberyCreationForm(ShrubberyCreationForm &other);
		~ShrubberyCreationForm();
		ShrubberyCreationForm& operator = (const ShrubberyCreationForm& other);
		void execute(Bureaucrat const &executor);
};

// for << operator
std::ostream& operator << (std::ostream& out, ShrubberyCreationForm& form);

#endif