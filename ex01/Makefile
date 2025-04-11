#=============== Colors ================
BGREEN = \033[1;32m
BYELLOW = \033[1;33m
RESET = \033[0m
#========================================

NAME = poly

SRC = $(shell find . -name "*.cpp")

HEADERS = $(shell find . -name "*.hpp")

OBJ = $(SRC:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: re
	@echo "$(BGREEN)Running $(NAME)...$(RESET)"
	@sleep 1
	@echo "$(BYELLOW)======== OK ========$(RESET)"
	@./$(NAME)