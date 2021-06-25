# **************************************************************************** #
#   #
#  ::: ::::::::    #
#    Makefile   :+: :+:    :+:    #
#   +:+ +:+    +:+ #
#    By: asbai-el <marvin@42.fr>     +#+  +:+  +#+    #
#    +#+#+#+#+#+   +#+  #
#    Created: 2019/10/17 13:17:54 by asbai-el     #+#    #+#    #
#    Updated: 2021/06/20 14:32:08 by asbai-el    ###   ########.fr   #
#   #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEADER = libft/libft.h

CLIENT = client
SERVER = server

CLIENT_SRC = client.c
SERVER_SRC = server.c

LIBFT = libft.a

LIBFT_SRCS = libft/ft_isdigit.c libft/ft_putchar.c libft/ft_putnbr.c\
		    libft/ft_putstr_fd.c  libft/ft_strlcpy.c\
			libft/ft_atoi.c  libft/ft_isspace.c  libft/ft_putchar_fd.c\
			 libft/ft_putnbr_fd.c  libft/ft_split.c libft/ft_strlen.c

LIBFT_OBJS = $(LIBFT_SRCS:.c=.o)

all: $(CLIENT) $(SERVER)

$(CLIENT): $(CLIENT_SRC) $(LIBFT) $(HEADER)
	$(CC) $(CFLAGS) $(CLIENT_SRC) $(LIBFT) -o $(CLIENT)
$(SERVER): $(SERVER_SRC) $(LIBFT) $(HEADER)
	$(CC) $(CFLAGS) $(SERVER_SRC) $(LIBFT) -o $(SERVER)

$(LIBFT): $(LIBFT_OBJS)
	ar rcs $(LIBFT) $(LIBFT_OBJS)

clean:
	rm -f $(LIBFT_OBJS)

fclean: clean
	rm -f $(CLIENT) $(SERVER) $(LIBFT)

re: fclean all
