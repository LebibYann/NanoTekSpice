##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile used to compile c++ program.
##

EXEC		=		nanotekspice

CC			=		g++
RM			=		rm -f
ECHO		=		echo -e

INCLUDE		=		-I./include/Controller -I./include/Components
FLAG		=		-g3 -W -Wall -Werror

SRC			=		$(wildcard src/*.cpp) $(wildcard src/Components/*.cpp)
OBJ			=		$(SRC:.cpp=.o)

DEFAULT		=		"\033[00m"
GREEN		=		"\033[0;32m"
TEAL		=		"\033[1;36m"
RED			=		"\033[0;31m"

all:				$(EXEC)

%.o: %.cpp
			@$(CC) -o $@ -c $< $(INCLUDE) $(FLAG) &&\
			$(ECHO) $(TEAL) "[OK]" $(GREEN) $< $(DEFAULT) ||\
			$(ECHO) $(RED)  "[KO]" $< $(DEFAULT)

$(EXEC):		$(OBJ)
			@$(CC) $(FLAG) -o $@ $^

clean:
			@$(RM) $(OBJ) &&\
			$(ECHO) $(GREEN) "Object file deleted" $(DEFAULT) ||\
			$(ECHO) $(RED) "Error in clean rule!" $(DEFAULT)

fclean:			clean
			@$(RM) $(EXEC) &&\
			$(ECHO) $(GREEN) "Program deleted!" $(DEFAULT) || \
			$(ECHO) $(RED) "Error in fclean rule!" $(DEFAULT)

re: 			fclean all
