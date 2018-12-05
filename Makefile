CPP_FLAGS = -std=c++11 -Wall -Wextra -Werror

# uncomment for Linux
#CC = g++
#RM = rm -f

# uncomment for Mac OS X
#CC = g++
#RM = rm -f

# uncomment for Windows
<<<<<<< HEAD
CC = g++
=======
CC = c:\mingw\bin\g++
>>>>>>> fd82587695a8900b5477d664b12d269424bd2e6b
RM = del # cmd.exe
#RM = rm -fo # PowerShell

driver.exe: driver.cpp word.o
	$(CC) $(CPP_FLAGS) driver.cpp word.o -o driver.exe

test.exe: test.cpp word.o
	$(CC) $(CPP_FLAGS) test.cpp word.o -o test.exe

word.o: word.h word.cpp
	$(CC) $(CPP_FLAGS) -c word.cpp -o word.o

clean:
	$(RM) *.o

cleanall: clean
	$(RM) *.exe
