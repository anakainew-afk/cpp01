NAME = UnnecessaryViolence
CC = c++
CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

SRCS = srcs/main.cpp \
	srcs/Weapon.cpp \
	srcs/HumanA.cpp \
	srcs/HumanB.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp includes/Weapon.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re