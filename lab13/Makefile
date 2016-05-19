sources = zad01

programs = $(basename $(sources))
objects = $(addsuffix .o, $(programs))

CFLAGS = -Wall -std=c11
LDLIBS = -lm

zad01 :
	cc zad01.c $(CFLAGS) $(LDLIBS)

.PHONY : clean
clean :
	$(RM) $(objects) $(programs) *~

all : $(programs)
