CXX = g++
EXEC = main.exe
CXXFLAGS = -Wall -g

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

all:
	make clean
	make run

