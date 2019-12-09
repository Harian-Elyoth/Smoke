CC=g++
CCFLAGS= -Wall -Werror -std=c++11 -g
LIBFLAGS= 
SRC= $(wildcard *.cpp)
OBJ= $(SRC:.cpp=.o)
TST= $(wildcard unitTest/*.cpp)
OBJ_TEST = $(filter-out logic.o, $(OBJ)) $(TST:.cpp=.o)
EXEC= Smoke


all: $(EXEC)

testcase : $(OBJ_TEST) 
	g++ -std=c++11 -Wall  -o $@ $^

$(EXEC): $(OBJ)
	$(CC) $(LIBFLAGS) $^ -o $@  

%.o: %.cc
	$(CC) $(CCFLAGS) -o $@ -c $<

.depend:
	g++ -MM $(SRC) > .depends
-include .depends

clean:
	rm -f $(OBJ) $(EXEC)
cleantest:
	rm -f $(OBJ_TEST) testcase
distclean : clean cleantest
