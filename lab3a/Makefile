CXX = g++
EXEC = lab04.exe
CXXFLAGS = -Wall -g -O0 -pedantic --debug

SRC=$(wildcard *.cpp)
OBJS=$(SRC:.cpp=.o)

$(EXEC): $(OBJS)
	$(CXX) -o $(EXEC) $(OBJS) $(CXXFLAGS)

*.o: *.cpp
	$(CXX) -c $(CXXFLAGS) $<

.PHONY: clean run all 

clean: 
	rm -f $(OBJS)
	rm -f $(EXEC) 

run: $(EXEC)
	@echo 
	@echo ~~~ NOW RUNNING THE EXECUTABLE: ~~~
	./$(EXEC)
	@echo

all:
	make run
	make clean


