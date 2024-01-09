/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:27:24 by asaber            #+#    #+#             */
/*   Updated: 2024/01/09 16:22:47 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
	this->name = "Default";
	this->is_signed = true;
	this->sign_required = 150;
	this->exec_required = 150;
}

Form::Form(std::string _name, bool _is_signed, const int _sign_required, const int _exec_required);
{
	this->name = _name;
	this->is_signed = _is_signed;
	this->sign_required = _sign_required;
	this->exec_required = _exec_required;
}

Form::~Form()
{
	std::cout << "Form Destroyed" << std::endl;
}

