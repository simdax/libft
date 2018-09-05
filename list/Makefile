SRCS = ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstcpy.c ft_lstreduce.c 
OBJS = $(SRCS:%.c=%.o)

all: $(OBJS)
				echo $(OBJS)

%.o: $(SRCS)
	gcc -I .. -c $< -o $@

