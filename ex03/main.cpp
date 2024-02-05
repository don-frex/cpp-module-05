#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{

	try
	{
		Intern intern;
		intern.makeForm("robotomy request", "Bender");
		intern.makeForm("presidential pardon", "Bender");
		intern.makeForm("shrubbery creation", "Bender");
		// set case error
		intern.makeForm("chahat sekna", "Bender");

	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	//std::cout << test.getsign_required() << "\n" << test.getexec_required() << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	
	return (0);
}