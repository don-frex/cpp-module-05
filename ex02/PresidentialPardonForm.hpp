/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 23:14:35 by asaber            #+#    #+#             */
/*   Updated: 2024/01/19 23:33:25 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string _target);
		PresidentialPardonForm(PresidentialPardonForm &other);
		PresidentialPardonForm& operator = (const PresidentialPardonForm& other);
		~PresidentialPardonForm();
		void execute(Bureaucrat const &executor);
};

std::ostream& operator << (std::ostream& out, PresidentialPardonForm& form)
{
	out << "PresidentialPardonForm " << form.getname() << " is " << (form.getsigning() ? "" : "not ") << "signed" << std::endl;	
	return (out);
}

#endif