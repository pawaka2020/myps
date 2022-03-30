NAME = push_swap
FLAG1 = -Wall -Wextra -Werror -g -fsanitize=address
FLAG2 = -g -fsanitize=address

$(NAME): all
all:
	gcc $(FLAG2) *.c algos/*.c cmds/*c -o $(NAME)
clean:
	rm -f *.o
	rm *.a
fclean: clean
	rm -f $(NAME)
re: fclean all clean
t1: all
	./$(NAME) 12114 -32312 1000
t2: all
	./$(NAME) 4 3 2 1 0
t3: all
	./$(NAME) 2 1 3 6 5 -8 123 441 -564 13
t4: all
	./$(NAME) 1 2 3 4 5
.PHONY: $(NAME) all clean fclean re t t2
