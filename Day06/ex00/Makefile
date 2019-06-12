FLAGS = -Wall -Wextra -Werror

SRC = *.cpp

OUT = *.o 

all :
	clang++ $(FLAGS) -c $(SRC)
	clang++ -o scalar_con $(OUT)

clean :
	rm -rf $(OUT)

fclean : clean
	rm -rf scalar_con

re: fclean all