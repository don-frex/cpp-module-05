#include "Form.hpp"

int	main()
{
	try
	{
		Bureaucrat bure("l9ayd", 14);
		Form form("3a9d lizdiyad", 0, 100, 100);
		form.beSigned(bure);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------" << std::endl;
	
	return (0);
}