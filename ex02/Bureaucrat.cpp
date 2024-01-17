#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(1) {

}

Bureaucrat::Bureaucrat(std::string _name, int grade)
{
	this->name = _name;
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->grade = grade;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& other)
{
	this->name = other.name;
	this->grade = other.grade;
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "the grade is too high! ";
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "the grade is too low! ";
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "bureaucrat is distroyed!" << std::endl;
}

std::string Bureaucrat::getName(void)
{
	return (name);
}

int Bureaucrat::getGrade(void)
{
	return (grade);
}

void	Bureaucrat::increment(void)
{
	this->grade--;
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
}
void	Bureaucrat::decrement(void)
{
	this->grade++;
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
}