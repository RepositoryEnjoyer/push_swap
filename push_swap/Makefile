SRCS   = srcs/*.c
OBJS   = objs/*.o
BNSRCS = srcs\ bonus/*.c
BNOBJS = objs\ bonus/*.o
LIBFT  = libft/libft.a
INC	   = -I includes/ -I libft/libft.h
NAME   = push_swap
BNNAME = checker
CFLAGS = -Wall -Wextra -Werror -g
RM	   = rm -rf

all: ${NAME}
	norminette
	@echo "------------------"
	@echo "Norminette done 🤪"
	@echo "---------------------------------"
	@echo "Compiled push_swap and friends 😄"
	@echo "---------------------------------"
	@echo "Executable done 😘"
	@echo "-----------------"

${NAME}: ${OBJS} ${LIBFT}
	@gcc ${INC} ${CFLAGS} -o ${NAME} ${OBJS} ${LIBFT}

${BNNAME}: ${BNOBJS} ${BNLIBFT}
	@gcc ${INC} ${CFLAGS} -o ${BNNAME} ${BNOBJS} ${LIBFT}

${LIBFT}: libft/*.c
	@${MAKE} -C ./libft	

${BNLIBFT}: libft/*.c
	@${MAKE} -C ./libft
	@make -C ./libft bonus		

${OBJS}: ${SRCS}
	@gcc ${INC} ${CFLAGS} -c ${SRCS}
	@rm -rf objs
	@mkdir objs
	@mv *.o objs

${BNOBJS}: ${BNSRCS}
	@gcc ${INC} ${CFLAGS} -c ${BNSRCS}
	@rm -rf objs\ bonus
	@mkdir objs\ bonus
	@mv *.o objs\ bonus

bonus: ${BNNAME}
	@echo "-------------------------------"
	@echo "Compiled checker and friends 🤯"
	@echo "-------------------------------"
	@echo "Bonus executable done 🧐"
	@echo "------------------------"

oclean:
	@rm *.o

clean:
	@${RM} objs
	@${RM} objs\ bonus
	@${MAKE} -C ./libft clean
	@echo "Cleaning push_swap and friends 🥺"

fclean: clean
	@echo "Fcleaning push_swap and friends 😢"
	@${RM} ${LIBFT} 
	@${RM} $(NAME)
	@${RM} $(BNNAME)

re: fclean all

.PHONY: all clean fclean re bonus oclean