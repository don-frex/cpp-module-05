#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main()
{

	try
	{
		RobotomyRequestForm test("ttttttttest");
		RobotomyRequestForm test2("2ttttttttest");
		RobotomyRequestForm test3("3ttttttttest");
		RobotomyRequestForm test4("4ttttttttest");
		Bureaucrat sil9ayd("si l9ayd", 1);
		test.execute(sil9ayd);
		test2.execute(sil9ayd);
		test3.execute(sil9ayd);
		test4.execute(sil9ayd);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	//std::cout << test.getsign_required() << "\n" << test.getexec_required() << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	
	return (0);
}