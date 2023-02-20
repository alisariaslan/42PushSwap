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

leak:
	gcc -g -O1 $(FILES) $(HEADERS)
	valgrind --leak-check=yes --log-file=valgrind.rpt ./a.out 4 67 3 87 23
	cat valgrind.rpt

d:
	make re
	./$(NAME) 2 1 3 6 5 8

w:
	make re
	./$(NAME) -408757 -401049 304583 343052 -398761 -282550 54469 474401 -39412 -345306 261709 116661 465371 21048 -221431 -481394 -121404 436680 -174316 37590 -105474 -12163 -281289 -113736 144895 342088 429597 485395 346890 335818 88640 -365690 -38441 -257926 -444994 217330 -176622 -164492 -237164 9723 275892 -182025 55917 80801 -8939 465114 487219 -7041 477706 334009 96063 402435 31084 458814 131300 18334 -431734 -173313 -181579 -97244 185178 -327198 -432545 130672 -457056 -172592 -9261 193626 -94095 -286864 -323735 416163 436253 58152 88183 220004 397660 404320 329231 38305 -205783 316354 186811 -143610 -247355 418088 239309 -53901 -232763 -334522 -362561 25472 400584 -292222 42036 -496842 274466 156356 290428 239451 | wc -l

test:
	clear
	./$(NAME) 2 1 3 6 5 8 | wc -l
	./$(NAME) 4 67 3 87 23 | wc -l

n:
	clear
	norminette -R CheckForbiddenSourceHeader