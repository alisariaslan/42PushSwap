NAME = push_swap
FILES = $(shell find . -name "*.c")
HEADERS = $(shell find . -name "*.h")
ARGS........................................ = -Wall -Wextra -Werror

$(NAME): $(FILES) $(HEADERS)
	GCC $(ARGS) -c $(FILES) $(HEADERS)

all:
	make
	GCC $(ARGS) -o $(NAME) *.o

clean:
	rm -rf *.o

fclean:
	make clean
	rm -rf *.gch
	rm -rf $(NAME)

re:
	make fclean
	make all

d:
	make re
	clear
	./$(NAME) -1 3 2 1 4 -5

w:
	make re
	clear
	./$(NAME) -1 3 2 1 4 -5

n:
	norminette -R CheckForbiddenSourceHeader