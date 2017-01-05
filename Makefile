CCRED =	$(echo -e "\033[0;31m")
CCYELLOW = $(echo -e "\033[0;33m")
CCGREEN = $(echo -e "\033[0;32m")
CCEND = $(echo -e "\033[0m")

NAME =	libft.a

SRCS = srcs

D_BTREE = $(SRCS)/fct_btree
D_CALC = $(SRCS)/fct_calc
D_IS = $(SRCS)/fct_is
D_LIST = $(SRCS)/fct_list
D_MEM = $(SRCS)/fct_mem
D_PUT = $(SRCS)/fct_put
D_STR = $(SRCS)/fct_str

OBJS = objs/
INCS = includes/
SRC = 	$(D_BTREE)/ft_btree_create_node.c $(D_BTREE)/ft_btree_apply_prefix.c \
OBJ = 	ft_btree_create_node.c ft_btree_apply_prefix.c \
INC = 
FLAGS = -Wall -Wextra -Werror -g

all : $(NAME)

$(NAME): $(SRC) $(INC)
	gcc $(FLAGS) -I $(INC) -c $(SRC)
	mv *.o $(OBJS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
