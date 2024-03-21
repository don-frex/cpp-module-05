#include "Bureaucrat.hpp"

int main()
{
	try
	{
		try
		{
			Bureaucrat test("test", 200);	
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		Bureaucrat a("a", 1);
		Bureaucrat b("b", 1);
		Bureaucrat c;
		c = b;
		std::cout << "a, " << "bureaucrat grade "<< a.getGrade() <<std::endl;
		std::cout << "b, " << "bureaucrat grade "<< b.getGrade() <<std::endl;
		std::cout << std::endl;
		std::cout << "test << " << a << std::endl;
		
		// a.decrementGrade();
	
		// b.incrementGrade();
	
		//std::cout << a << std::endl;
		//std::cout << b << std::endl;
		//std::cout << std::endl;

		a.increment();
		b.decrement();
		std::cout << "a, " << "bureaucrat grade "<< a.getGrade() <<std::endl;
		std::cout << "b, " << "bureaucrat grade "<< b.getGrade() <<std::endl;
		std::cout << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}