OBJ= main.o   save.o login.o student.o stumulu.o teamulu.o teacher.o root.o rootmulu.o
GCC=gcc
main:$(OBJ)
	$(GCC)  $^ -o $@                                                                                                           
clean:
	rm -rf *.o main
                        
