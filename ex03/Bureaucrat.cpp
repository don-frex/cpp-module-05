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
	std::cout << "bureaucrat is distroyed!" << std::endl;
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

void	Bureaucrat::signForm(AForm& form)
{
	if (form.getsigning())
		std::cout << this->getName() << " signed " << form.getname() << std::endl;
	else
		std::cout << this->getName() << " couldn’t sign " << form.getname() << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bur)
{
	out << "Bureaucrat " << bur.getName() << " grade " << bur.getGrade();
	return out;
}