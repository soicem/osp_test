CC=gcc
OBJS = calchw5.o Add.o Minus.o Multi.o Divide.o
all : calchw5
CFLAGS= -Wall -g

%.o: %.c
	$(CC) -c -o $@ $(CFLAGS) $<

calchw5: $(OBJS)
	$(CC) -o $@ $^
clean:
	rm -f calchw5 $(OBJS)
