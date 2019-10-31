<<<<<<< HEAD
CC     = g++
CFLAGS = -Wall -ansi -pedantic
LFLAGS = -lm
OBJS   = number_correct.o find_ctrl.o main.o
EXEC   = main
=======
CXX = g++
EXEC = main.exe
CXXFLAGS = -Wall -g -O0 -pedantic --debug
>>>>>>> b05d538016925a0ebd2da1ddd3786ef0aceec623

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
