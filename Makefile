CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIB1 = ar -rcs
LIB2 = ranlib
RM = rm -f
NAME = libft.a
INCLUDE = libft.h
SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c
OBJS = $(SRCS:.c=.o)

all: $(OBJS) $(NAME)

$(OBJS): $(INCLUDE)

$(NAME):	$(OBJS) $(INCLUDE)
			$(LIB1) $(NAME) $(OBJS)
			$(LIB2) $(NAME)

# se non gli dai nessuna ricetta di default compila
# questo comando all compila
# all: $(OBJS) $(NAME)
# 	@$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

# $(OBJS): $(SRCS) $(INCLUDE)

# $(NAME):	$(OBJS) $(INCLUDE)
# 			$(LIB1) $(NAME) $(OBJS)
# 			$(LIB2) $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

# @$(MAKE) $(OBJS)
# all: 
# 	$(NAME)
# 	@echo all

# $(NAME):	$(OBJS) $(INCLUDE)
# 			$(LIB1) $(NAME) $(OBJS)
# 			$(LIB2) $(NAME)
# 			@echo NAME
# .c.o:
# 			@$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)
# 			@echo .c.o

# t:			$(INCLUDE) $(OBJS)
# 			@$(CC) $(CFLAGS) $(OBJS)
# 			main.c -o a.out
# 			@echo ""
# 			@./a.out
# #			@make fclean

# t_fclean:	fclean
# 			$(RM) t_testes.out

# t_re:	t_fclean tests

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