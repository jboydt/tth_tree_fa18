CPP_FLAGS = -std=c++11 -Wall -Wextra -Werror

# uncomment for Linux
#CC = g++
#RM = rm -f

# uncomment for Mac OS X
<<<<<<< HEAD
#CC = g++
#RM = rm -f
=======
# CC = g++
# RM = rm -f
>>>>>>> 6642b4a1a9a3a503b22689ef5824b847f37f5aad

# # uncomment for Windows
  CC = g++
 RM = del # cmd.exe
# # RM = rm -fo # PowerShell

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
