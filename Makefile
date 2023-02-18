NAME = push_swap
FILES = $(shell find . -name "*.c")
HEADERS = $(shell find . -name "*.h")
ARGS........................................ = -Wall -Wextra -Werror

$(NAME): $(FILES) $(HEADERS)
	gcc $(ARGS) -c $(FILES) $(HEADERS)

all:
	make
	gcc $(ARGS) -o $(NAME) *.o

clean:
	rm -rf *.o

fclean:
	make clean
	rm -rf *.gch
	rm -rf $(NAME)

re:
	make fclean
	make all

release:
	make re
	make clean
	rm -rf *.gch

d:
	make re
	clear
	./$(NAME) 2 1 3 6 5 8

w:
	make re
	./$(NAME) 1 2 3 -1

n:
	clear
	norminette -R CheckForbiddenSourceHeader