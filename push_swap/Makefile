SRCS   = srcs/*.c
OBJS   = objs/*.o
LIBFT  = libft/libft.a
INC	   = -I includes/ -I libft/libft.h
NAME   = push_swap
CFLAGS = -Wall -Wextra -Werror -g
RM	   = rm -rf

all: ${NAME}
	norminette
	@echo "-----------------"
	@echo "Norminette done 🤪"
	@echo "---------------------------------"
	@echo "Compiled push_swap and friends 😄"
	@echo "---------------------------------"
	@echo "Executable done 😘"
	@echo "-----------------"

${NAME}: ${OBJS} ${LIBFT}
	@gcc ${INC} ${CFLAGS} -o ${NAME} ${OBJS} ${LIBFT}

${LIBFT}: libft/*.c
	@${MAKE} -C ./libft	

${OBJS}: ${SRCS}
	@gcc ${INC} ${CFLAGS} -c ${SRCS}
	@rm -rf objs
	@mkdir objs
	@mv *.o objs

oclean:
	@rm *.o

clean:
	@${RM} objs
	@${MAKE} -C ./libft clean
	@echo "Cleaning push_swap and friends 🥺"

fclean: clean
	@echo "Fcleaning push_swap and friends 😢" 
	@${RM} $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus