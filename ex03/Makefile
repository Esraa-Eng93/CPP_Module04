NAME = Materia
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =  main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp ICharacter.cpp \
		IMateriaSource.cpp MateriaSource.cpp 
OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re