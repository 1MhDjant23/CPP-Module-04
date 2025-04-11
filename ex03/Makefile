#============== Colors ==============
BRED = \033[1;31m
BORANGE = \033[1;33m
BYEL = \033[1;33m
GREEN = \033[1;32m
BGRN = \033[1;32m
BWHITE = \033[1;37m
YELLOW = \033[1;33m
RES = \033[0m
#=====================================

NAME = MateriaSystem

SRC = $(shell find . -name "*.cpp")

HDR = $(shell find . -name "*.hpp")

OBJ = $(SRC:.cpp=.o)

OBJ_COUNT = $(words $(OBJ))


COUNT = 0

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "$(BYEL)Compilation complete.$(RES)"

%.o: %.cpp $(HDR)
	@$(eval COUNT=$(shell echo $$(($(COUNT) + 1))))
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(BGRN)[$$(($(COUNT) * 100 / $(OBJ_COUNT)))%]$(BWHITE)Compiling $<$(RES)"
	@echo "$(YELLOW)Object file $@ created.$(RES)"

clean:
	@rm -f $(OBJ)
	@echo "$(BORANGE)Object files removed.$(RES)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(BRED)Executable removed.$(RES)"

re: fclean all
	@echo "$(BYEL)Recompilation complete.$(RES)"

.PHONY: all clean fclean re run

run: $(NAME)
	@echo "$(BYEL)|        |---------------------------------|        |"
	@echo "|=======|$(BGRN)     Running $(NAME) ...   $(BYEL)  |=======|"
	@echo "|        |---------------------------------|        |$(RES)\n"
	@sleep 1
	@./$(NAME) 
	@$(MAKE) clean



