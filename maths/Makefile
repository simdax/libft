SRCS = root.c power.c
OBJS = $(SRCS:.c=.o)

all: $(OBJS)
	gcc -g $? main.c

%.o : %.c
	gcc -g -c $< -o $@

run: all
	./a.out

test:	all
	./test
