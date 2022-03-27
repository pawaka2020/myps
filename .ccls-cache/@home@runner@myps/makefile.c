NAME = push_swap
FLAG1 = -Wall -Wextra -Werror -g -fsanitize=address
FLAG2 = -g -fsanitize=address

$(NAME): all
all:
	gcc $(FLAG1) *.c -o $(NAME)
clean:
	rm -f *.o
	rm *.a
fclean: clean
	rm -f $(NAME)
re: fclean all clean
t: re
	./$(NAME) 1 2 3

.PHONY: $(NAME) all clean fclean re t
