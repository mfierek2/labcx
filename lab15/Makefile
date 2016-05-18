sources = zad4.c

programs = $(basename $(sources))
objects = $(addsuffix .o, $(programs))

CFLAGS = -Wall -std=c11
LDLIBS = -lm

zad4 :
	cc zad4.c -o zad4 $(CFLAGS) $(LDLIBS)

.PHONY : clean
clean :
	$(RM) $(objects) $(programs) *~

all : $(programs)
