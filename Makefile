# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sflinois <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 09:38:34 by sflinois          #+#    #+#              #
#    Updated: 2017/01/09 17:09:29 by sflinois         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CCRED =	"\033[0;31m"
CCYELLOW = "\033[0;33m"
CCGREEN = "\033[0;32m"
CCEND = "\033[0m"

NAME =	libftprintf.a

SRCS = srcs

D_BTREE = $(SRCS)/fct_btree
D_CALC = $(SRCS)/fct_calc
D_IS = $(SRCS)/fct_is
D_LIST = $(SRCS)/fct_list
D_MEM = $(SRCS)/fct_mem
D_PUT = $(SRCS)/fct_put
D_STR = $(SRCS)/fct_str

SRC = 	$(D_BTREE)/ft_btree_create_node.c $(D_BTREE)/ft_btree_apply_prefix.c \
	$(D_BTREE)/ft_btree_apply_infix.c $(D_BTREE)/ft_btree_apply_suffix.c \
	\
	$(D_CALC)/ft_atoi.c $(D_CALC)/ft_base2base.c $(D_CALC)/ft_base2dec.c \
	$(D_CALC)/ft_pow.c \
	\
	$(D_IS)/ft_isalpha.c $(D_IS)/ft_isalnum.c $(D_IS)/ft_isascii.c \
	$(D_IS)/ft_isdigit.c $(D_IS)/ft_isprint.c $(D_IS)/ft_isneg.c \
	\
	$(D_LIST)/ft_lstadd.c $(D_LIST)/ft_lstdel.c $(D_LIST)/ft_lstdelone.c \
	$(D_LIST)/ft_lstiter.c $(D_LIST)/ft_lstmap.c $(D_LIST)/ft_lstnew.c \
	$(D_LIST)/ft_lstdelone_cmp.c \
	\
	$(D_MEM)/ft_bzero.c $(D_MEM)/ft_memalloc.c $(D_MEM)/ft_memccpy.c \
	$(D_MEM)/ft_memchr.c $(D_MEM)/ft_memcmp.c $(D_MEM)/ft_memcpy.c \
	$(D_MEM)/ft_memdel.c $(D_MEM)/ft_memmove.c $(D_MEM)/ft_memset.c \
	\
	$(D_PUT)/ft_putchar.c $(D_PUT)/ft_putchar_fd.c $(D_PUT)/ft_putendl.c \
	$(D_PUT)/ft_putendl_fd.c $(D_PUT)/ft_putnbr.c $(D_PUT)/ft_putnbr_fd.c \
	$(D_PUT)/ft_putstr.c $(D_PUT)/ft_putstr_fd.c \
	\
	$(D_STR)/ft_itoa.c $(D_STR)/ft_strcat.c $(D_STR)/ft_strchr.c \
	$(D_STR)/ft_strclr.c $(D_STR)/ft_strcmp.c $(D_STR)/ft_strcpy.c \
	$(D_STR)/ft_strdel.c $(D_STR)/ft_strdup.c $(D_STR)/ft_strndup.c \
	$(D_STR)/ft_strequ.c $(D_STR)/ft_striter.c $(D_STR)/ft_striteri.c \
	$(D_STR)/ft_strjoin.c $(D_STR)/ft_strlcat.c $(D_STR)/ft_strlen.c \
	$(D_STR)/ft_strmap.c $(D_STR)/ft_strmapi.c $(D_STR)/ft_strncat.c \
	$(D_STR)/ft_strncmp.c $(D_STR)/ft_strncpy.c $(D_STR)/ft_strnequ.c \
	$(D_STR)/ft_strnew.c $(D_STR)/ft_strnstr.c $(D_STR)/ft_strrchr.c \
	$(D_STR)/ft_strsplit.c $(D_STR)/ft_strstr.c $(D_STR)/ft_strsub.c \
	$(D_STR)/ft_strtrim.c $(D_STR)/ft_tolower.c $(D_STR)/ft_toupper.c \
	$(D_STR)/ft_itoa_base.c \
	\
	f_printf/ft_printf.c f_printf/fct_type_args.c

OBJ = 	ft_btree_create_node.o ft_btree_apply_prefix.o \
	ft_btree_apply_infix.o ft_btree_apply_suffix.o \
	\
	ft_atoi.o ft_base2base.o ft_base2dec.o \
	ft_pow.o \
	\
	ft_isalpha.o ft_isalnum.o ft_isascii.o \
	ft_isdigit.o ft_isprint.o ft_isneg.o \
	\
	ft_lstadd.o ft_lstdel.o ft_lstdelone.o \
	ft_lstiter.o ft_lstmap.o ft_lstnew.o \
	ft_lstdelone_cmp.o \
	\
	ft_bzero.o ft_memalloc.o ft_memccpy.o \
	ft_memchr.o ft_memcmp.o ft_memcpy.o \
	ft_memdel.o ft_memmove.o ft_memset.o \
	\
	ft_putchar.o ft_putchar_fd.o ft_putendl.o \
	ft_putendl_fd.o ft_putnbr.o ft_putnbr_fd.o \
	ft_putstr.o ft_putstr_fd.o \
	\
	ft_itoa.o ft_strcat.o ft_strchr.o \
	ft_strclr.o ft_strcmp.o ft_strcpy.o \
	ft_strdel.o ft_strdup.o ft_strndup.o \
	ft_strequ.o ft_striter.o ft_striteri.o \
	ft_strjoin.o ft_strlcat.o ft_strlen.o \
	ft_strmap.o ft_strmapi.o ft_strncat.o \
	ft_strncmp.o ft_strncpy.o ft_strnequ.o \
	ft_strnew.o ft_strnstr.o ft_strrchr.o \
	ft_strsplit.o ft_strstr.o ft_strsub.o \
	ft_strtrim.o ft_tolower.o ft_toupper.o \
	ft_itoa_base.o \
	\
	ft_printf.o fct_type_args.o

INCS = includes/

INC = $(INCS)libft.h

FLAGS = -Wall -Wextra -Werror -g

all : $(NAME)

$(NAME): $(SRC) $(INC)
	@gcc $(FLAGS) -I $(INC) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo $(CCGREEN) "Libft OK" $(CCEND)

makec: all clean

clean:
	@rm -f $(OBJ)
	@echo $(CCRED) "Remove libft .o" $(CCEND)

fclean: clean
	@rm -f $(NAME)
	@echo $(CCRED) "Remove $(NAME)" $(CCEND)

re: fclean all
