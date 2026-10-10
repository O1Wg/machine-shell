CC	= gcc	
CFLAGs	=	-Wall	-Wextra	-g
SRC	=$(wildcard src/*.c)
sadaf: $(SRC)
	$(CC)	$(CFLAGS)	$(SRC)	-o sadaf

clean:
	rm -f sadaf

.PHONY: clean
