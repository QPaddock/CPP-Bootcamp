FLAGS = -Wall -Wextra -Werror

SRC = add.cpp main.cpp search.cpp phonebook.hpp

OUT = add.o main.o search.o 

all :
	clang++ $(FLAGS) -c $(SRC)
	clang++ -o phonebook $(OUT)

clean :
	rm -rf $(OUT)

fclean : clean
	rm -rf phonebook

re: fclean all