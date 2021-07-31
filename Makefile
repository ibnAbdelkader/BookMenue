#CXX = g++
#CXXFLAGS = -g -Wall -Wextra
#.PHONY : all
#all : BookMenu
#BookMenu : BookMenu.cpp BookList.o
#	$(CXX) $(CXXFLAGS) -o $@ $^
#BookList.o : BookList.cpp BookList.hpp Book.o
#	$(CXX) $(CXXFLAGS) -c $<
#Book.o : Book.cpp Book.hpp
#	$(CXX) $(CXXFLAGS) -c $<
#.PHONY : clean
#clean :
#rm BookMenu.o
#rm BookMenu

#all:
#	g++ BookMenu.cpp BookList.cpp Book.cpp -o BookMenu
all: BookMenu

BookMenu: BookMenu.o BookList.o Book.o
	g++ BookMenu.o BookList.o Book.o -o BookMenu
BookMenu.o: BookMenu.cpp
	g++ -c BookMenu.cpp
BookList.o: BookList.cpp BookList.hpp
	g++ -c BookList.cpp
Book.o:	Book.cpp Book.hpp
	g++ -c Book.cpp
clean:
	rm -rf *o BookMenu