#include "Bureaucrat.hpp"

int	main()
{

	Bureaucrat bureau;
	try
	{
		bureau = Bureaucrat("lem9adem", 1);
		std::cout << bureau.getName() << std::endl;
		std::cout << bureau.getGrade() << std::endl;
		bureau.increment();
		std::cout << bureau.getGrade() << std::endl;
	}
	catch(const std::exception& ex)
	{
		std::cout <<"3andou ... " << ex.what() << std::endl;
		std::cout << bureau.getGrade() << std::endl;
	}
	try
	{
		Bureaucrat bureau("sa3at l9ayed", 0);
	}
	catch(const std::exception& ex)
	{
		std::cout << "sa3at l9ayed 3andou ... " << ex.what() << std::endl;
	}
	
	return (0);
}