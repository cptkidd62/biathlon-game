CC = g++
CFLAGS = -Wall -g
LIBS = -lsfml-graphics -lsfml-window -lsfml-system
SRCS = src/_main.cpp src/App.cpp
OBJS = $(SRCS:.c=.o)
MAIN = biathlon

all: $(MAIN)

$(MAIN): $(OBJS) 
		$(CC) $(CFLAGS) -o $(MAIN) $(OBJS) $(LIBS)

.c.o:	$(CC) $(CFLAGS) -c $<  -o $@
