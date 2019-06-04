FLAGS = -Wall -Wextra -Werror

SRC = megaphone.cpp

OUT = megaphone.o 

all :
	clang++ $(FLAGS) -c $(SRC)
	clang++ -o megaphone $(OUT)

clean :
	rm -rf $(OUT)

fclean : clean
	rm -rf megaphone

re: fclean all