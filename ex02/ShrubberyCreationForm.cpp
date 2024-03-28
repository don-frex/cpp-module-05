#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("defualt", false, 145, 137), target("defult")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) : AForm(Target, false, 145, 137), target(Target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other) : AForm(other.target, other.getsigning(), other.getsign_required(), other.getexec_required()), target(other.target)
{

}
ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& other)
{
	this->target = other.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::ofstream outfile;

	if (executor.getGrade() > this->getexec_required())
		throw AForm::GradeTooLowException();
	// "c_str()" to convert std::string to const char* to avoiding errors when compailing using std=c++98
	outfile.open((this->target + "_shrubbery").c_str());
	outfile <<"	          .     .  .      +     .      .          ."<< std::endl;
	outfile <<"     .       .      .     #       .           ."<< std::endl;
	outfile <<"        .      .         ###            .      .      ."<< std::endl;
	outfile <<"      .      .   #:. .: #####:. .:#  .      ."<< std::endl;
	outfile <<"          .      . ''####'###'####''  ."<< std::endl;
	outfile <<"       .     '#:.    .:#'###'#:.    .:#'  .        .       ."<< std::endl;
	outfile <<"  .             '#########'#########'        .        ."<< std::endl;
	outfile <<"        .    '#:.  '####'###'####'  .:#''   .       ."<< std::endl;
	outfile <<"     .     .  '#######''##''##''#######'                  ."<< std::endl;
	outfile <<"                .'##'#####'#####'##'           .      ."<< std::endl;
	outfile <<"    .   '#:. ...  .:##'###'###'##:.  ... .:#'     ."<< std::endl;
	outfile <<"      .     '#######'##'#####'##'#######'      .     ."<< std::endl;
	outfile <<"   .    .     '#####''#######''#####'    .      ."<< std::endl;
	outfile <<"            .     '      000      ''    .     ."<< std::endl;
	outfile <<"       .         .   .   000     .        .       ."<< std::endl;
	outfile <<".. .. ..................O000O........................ ......"<< std::endl;
	std::cout << "successfuly operation" << std::endl;
	outfile.close();
}

// for << operator
std::ostream& operator << (std::ostream& out, ShrubberyCreationForm& form)
{
	out << "ShrubberyCreationForm " << form.getname() << " is " << (form.getsigning() ? "" : "not ") << "signed" << std::endl;
	return (out);
}