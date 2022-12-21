CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIB1 = ar -rcs
LIB2 = ranlib
RM = rm -f
NAME = libft.a
INCLUDE = libft.h
SRCS = ft_memset.c
OBJS = $(SRCS:.c =.o)

all: $(NAME)
	@echo all

$(NAME):	$(OBJS) $(INCLUDE)
			$(LIB1) $(NAME) $(OBJS)
			$(LIB2) $(NAME)
			@echo NAME
.c.o:
			@$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)
			@echo .c.o

t:			$(INCLUDE) $(OBJS)
			@$(CC) $(CFLAGS) $(OBJS)
			main.c -o a.out
			@echo ""
			@./a.out
#			@make fclean

t_fclean:	fclean
			$(RM) t_testes.out

t_re:	t_fclean tests

# $(NAME):	$(OBJS) $(INCLUDE)
# 			@$(LIB1) $(NAME) $(OBJS)
# 			@$(LIB2) $(NAME)
# 			@echo NAME

# .c.o:
# 			@$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)
# 			@echo .c.o

# clean:
# 			@$(RM) $(OBJS)
# 			@echo clean

# fclean:		clean
# 			@$(RM) $(NAME)
# 			@echo fclean

# re:			fclean all
# 			@echo re