##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

SRC	=	src/neutrinos.cpp

OBJ	=	$(SRC:.cpp=.o)

NAME	=	206neutrinos

all:	$(NAME)

$(NAME):	$(OBJ)
	g++ -o $(NAME) $(OBJ)

clean:
	find -name "*~" -delete
	find -name "*.o" -delete
	find -name "*#" -delete

fclean:	clean
	find -name $(NAME) -delete

re:	fclean all

.PHONY:	all clean fclean re
