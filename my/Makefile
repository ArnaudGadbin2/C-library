##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## task01
##
SRC	=	*.c

OBJ	=	*.o

NAME	= libmy.a

all: compile

compile:
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re:	clean all
