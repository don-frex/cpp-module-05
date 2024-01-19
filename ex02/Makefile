CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

RM = rm -rf

SRCS = main.cpp AForm.cpp Bureaucrat.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = Form

SLEEP = sleep 2

ICYAN=\033[1;33m
CYAN=\033[1;32m
END=\033[0m

BANNER = \
"              $(CYAN)       ___           ___           ___           ___           ___      $(END)  \n"\
"              $(CYAN)     /\  \         |\__\         /\__\         /\__\         /\  \     $(END)  \n"\
"              $(CYAN)    /::\  \        |:|  |       /:/  /        /::|  |       /::\  \    $(END)  \n"\
"              $(CYAN)   /:/\:\  \       |:|  |      /:/  /        /:|:|  |      /:/\:\  \   $(END)  \n"\
"              $(CYAN)  /::\ \:\  \      |:|__|__   /:/  /  ___   /:/|:|__|__   /::\~\:\  \  $(END)  \n"\
"              $(CYAN) /:/\:\ \:\__\     /::::\__\ /:/__/  /\__\ /:/ |::::\__\ /:/\:\ \:\__\ $(END)  \n"\
"              $(CYAN) \/_|::\/:/  /    /:/~~/~    \:\  \ /:/  / \/__/~~/:/  / \/__\:\/:/  / $(END)  \n"\
"              $(CYAN)    |:|::/  /    /:/  /       \:\  /:/  /        /:/  /       \::/  /  $(END)  \n"\
"              $(CYAN)    |:|\/__/     \/__/         \:\/:/  /        /:/  /        /:/  /   $(END)  \n"\
"              $(CYAN)    |:|  |                      \::/  /        /:/  /        /:/  /    $(END)  \n"\
"              $(CYAN)     \|__|                       \/__/         \/__/         \/__/ $(END)\033[1;42m:AKA Adnane SaBer$(END)  \n"\	

BANNER_LENGTH = 11

%.o : %.cpp
	@echo "$(CYAN)Compiling $<...$(END)"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	@echo "$(ICYAN)All is compiled:$(END)"
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@for i in `seq 1 $(BANNER_LENGTH)`; do \
		echo $(BANNER) | sed -n "$$i p"; \
		sleep 0.05; \
	done
	@sleep 0.5
	@echo "$(ICYAN)Done !$(END)"
	@sleep 0.1
clean :
	@echo "$(ICYAN)Cleaning ...$(END)"
	@sleep 0.2
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
