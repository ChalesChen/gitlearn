CC=g++
target:main
objects+=main.o add.o sub.o
all:$(objects)
$(objects):%.o:%.cpp
	$(CC) -c $(CFLAGES) $< -o $@
.PHONY:clean
clean:
	-rm -rf *.o main
