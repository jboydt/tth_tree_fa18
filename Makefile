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

# uncomment for Mac OS X
#CC = g++
#RM = rm -f

# uncomment for Windows
#CC = c:\mingw\bin\g++
#RM = del # cmd.exe
#RM = rm -fo # PowerShell

main.exe: driver.cpp word.o
	$(CC) $(CPP_FLAGS) driver.cpp word.o -o driver.exe

test.exe: test.cpp word.o
	$(CC) $(CPP_FLAGS) test.cpp word.o -o test.exe

word.o: word.h word.cpp
	$(CC) $(CPP_FLAGS) -c word.cpp -o word.o

clean:
	$(RM) *.o

cleanall: clean
	$(RM) *.exe
