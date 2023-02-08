CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = get_next_line.a

HEAD = get_next_line.h

SRC = get_next_line.c get_next_line_utils.c

OBJ = $(SRC:.c=.o)

all = $(NAME)

$(NAME) : $(OBJ)
	ar -rsc $@ $^

.c.o :
	$(CC) $(CFLAGS) -I $(HEAD) -c $< -o $@

clean :
	rm -rf $(OBJ) all

fclean :
	rm -rf $(NAME)

re :
	$(MAKE) fclean
	$(MAKE) all

.PHONY : all re clean fclean
