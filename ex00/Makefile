# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkarippa <jkarippa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/22 14:05:30 by jkarippa          #+#    #+#              #
#    Updated: 2026/02/22 14:26:15 by jkarippa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler
CXX = c++

# Compiler flags
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Name of the final executable
TARGET = megaphone

# Source files
SRC = megaphone.cpp

# Object files derived from source files
OBJ = $(SRC:.cpp=.o)

# 'all' is the default target: builds the executable
all: $(TARGET)

# Link object files into the executable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# Compile .cpp files to .o object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# ------------------- CLEAN ------------------- #
# Remove object files only
clean:
	rm -f $(OBJ)

# Remove object files AND the executable
fclean: clean
	rm -f $(TARGET)

# Rebuild everything from scratch
re: fclean all

# ------------------- HELP ------------------- #
# Display available commands
help:
	@echo "Makefile commands:"
	@echo "  make        : Build the executable $(TARGET)"
	@echo "  make clean  : Remove all object files (.o)"
	@echo "  make fclean : Remove all object files and the executable"
	@echo "  make re     : Rebuild everything from scratch"
	@echo "  make help   : Display the help message"