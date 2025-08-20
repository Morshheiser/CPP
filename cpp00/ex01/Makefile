NAME = phonebook
CC = c++ -Wall -Wextra -Werror -std=c++98
SRC = main.cpp PhoneBook.cpp Contact.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
