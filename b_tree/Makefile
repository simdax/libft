SRCS := init.c insert.c level.c utils.c
OBJS := $(SRCS:%.c=objs/%.o)
CC := gcc -g

all: $(OBJS) 

objs/%.o: %.c | objs
	$(CC) -c $< -o $@

objs:
	mkdir -p objs

debug_print: $(OBJS)
	$(CC) $(OBJS) tests/insert.c && lldb ./a.out	

insert: $(OBJS)
	$(CC) $(OBJS) tests/$@.c && ./a.out

print: $(OBJS) 
	$(CC) $(OBJS) tests/$@.c && ./a.out

parser_run: parser
	./a.out 5 + 5

parser: $(OBJS)
	@make -C ..
	$(CC) $(OBJS) -I.. ../string/ft_strcmp.o tests/$@.c

