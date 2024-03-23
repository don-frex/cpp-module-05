#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(1) {

}

Bureaucrat::Bureaucrat(std::string _name, int grade) : name(_name)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &other) : name(other.name)
{
	this->grade = other.grade;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& other)
{
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

}

std::string Bureaucrat::getName(void) const
{
	return (name);
}

int Bureaucrat::getGrade(void) const
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

<<<<<<< HEAD
void	Bureaucrat::signForm(Form& form)
{
	if (form.getsigning())
		std::cout << this->getName() << " signed " << form.getname();
	else
		std::cout << this->getName() << " couldn’t sign " << form.getname();
}

=======
>>>>>>> aca51779f85fb9a3e41f8a618d59f5ff398e5b4c
std::ostream& operator<<(std::ostream& out, const Bureaucrat& bur)
{
	out << "Bureaucrat " << bur.getName() << " grade " << bur.getGrade();
	return out;
}