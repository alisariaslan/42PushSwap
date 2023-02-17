NAME = push_swap
FILES = $(shell find . -name "*.c")
HEADERS = $(shell find . -name "*.h")
ARGSS = -Wall -Wextra -Werror BURAYI DÜZELTTTTTT

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
	./$(NAME) 2 1 3 6 5 8

w:
	make re
	clear
	./$(NAME) 1 -1 -0 3 12 65 -54 54 -12 123664 123664

n:
	norminette -R CheckForbiddenSourceHeader