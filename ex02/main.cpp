#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{

	try
	{
		RobotomyRequestForm test("ttttttttest");
		RobotomyRequestForm test2("2ttttttttest");
		RobotomyRequestForm test3("3ttttttttest");
		RobotomyRequestForm test4("4ttttttttest");
		PresidentialPardonForm ptest("anchoufou");
		PresidentialPardonForm ptest2("manchofo");
		ShrubberyCreationForm stest("chejra");
		Bureaucrat sil9ayd("si l9ayd", 1);
		Bureaucrat silm9adem("lm9adem", 15);
		test.execute(sil9ayd);
		test2.execute(sil9ayd);
		test3.execute(sil9ayd);
		test4.execute(sil9ayd);
		ptest.execute(sil9ayd);
		stest.execute(sil9ayd);
		sil9ayd.executeForm(ptest2);
		ptest2.execute(silm9adem);

	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	//std::cout << test.getsign_required() << "\n" << test.getexec_required() << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	
	return (0);
}