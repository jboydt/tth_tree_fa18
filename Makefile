# TODO
#
# new targets as pieces are implemented

FLAGS = -std=c++11

test.exe: bstree.hpp test.cpp
	g++ $(FLAGS) -o test.exe test.cpp
