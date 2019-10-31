CC     = g++
CFLAGS = -Wall -ansi -pedantic
LFLAGS = -lm
OBJS   = number_correct.o find_ctrl.o main.o
EXEC   = main

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(LFLAGS) $+ -o $@
	echo main: zbudowane!

%.o: %.cpp
	$(CC) -c $(CFLAGS) $<

lab02.o : check_number.h
find_ctrl.o: check_number.h
number_correct.o: check_number.h 

clean:
	rm -f *~
	rm -f *.bak
	rm -f $(EXEC) $(OBJS)

.PHONY: clean
