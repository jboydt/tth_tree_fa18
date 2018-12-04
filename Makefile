CPP_FLAGS = -std=c++11 -Wall -Wextra -Werror

# uncomment for Linux
#CC = g++
#RM = rm -f

# uncomment for Mac OS X
#CC = g++
#RM = rm -f

# uncomment for Windows (make sure MinGW/MSYS are installed!)
#CC = g++
#RM = del # cmd.exe
#RM = rm -fo # PowerShell

test.exe: bstree.hpp test.cpp
	g++ $(FLAGS) -o test.exe test.cpp
