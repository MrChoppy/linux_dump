##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## 
##


SRC 	= 	*.c

NAME	=	libmy.a


OBJ		=  $(SRC:.c=.o)

H 		= 	my.h

all: objects compile clean copylib copyh

compile: 
	ar rc $(NAME) $(OBJ)

objects: 
	gcc -c $(SRC)

copylib:
	cp $(NAME) ..

copyh:
	cp $(H) ../../include
clean: 
	rm $(OBJ)

fclean:
	rm -f $(NAME)
	
re: fclean all