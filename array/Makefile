LFT = -L.. -lft

include make.dep

all:
	gcc -g $(LFT) $(SRCS) test.c

run: all
	./a.out

debug: all
	lldb ./a.out
