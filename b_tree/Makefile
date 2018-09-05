SRCS := init.c insert.c level.c utils.c
OBJS := $(SRCS:%.c=objs/%.o)
CC := gcc -g
FLAGS := $(FLAGS) $(FLAGS)/mem #-Wall -Wextra -Werror 

all: $(OBJS) 

objs/%.o: %.c | objs
	$(CC) $(FLAGS) -c $< -o $@

objs:
	mkdir -p objs

insert: $(OBJS)
	$(CC) $(OBJS) $(FLAGS) tests/$@.c && ./a.out

print: $(OBJS)
	@make -C ..
	$(CC) $(OBJS) $(FLAGS) -lft -L.. tests/$@.c && ./a.out

parser: $(OBJS)
	@make -C ..
	$(CC) $(OBJS) $(FLAGS) ../string/ft_bigstrcmp.o ../string/ft_strcmp.o tests/$@.c

debug_print: $(OBJS)
	@make -C ..
	$(CC) $(OBJS) $(FLAGS) -lft -L.. tests/print.c && lldb ./a.out

debug_parser: parser
	lldb ./a.out 5 + 5 - 8 / 45 + 5

parser_run: parser
	./a.out 5 + 5 - 8 / 45 + 5

