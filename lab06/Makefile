sources = zad01 funkcje glowny

programs = $(basename $(sources))
objects = $(addsuffix .o, $(programs))

CFLAGS = -Wall -std=c11
LDLIBS = -lm

glowny.o : glowny.c
	cc -c glowny.c -o glowny.o $(CFLAGS) $(LDLIBS)
funkcje.o : funkcje.c
	cc -c funkcje.c -o funkcje.o $(CFLAGS) $(LDLIBS)
glowny : glowny.o funkcje.o
	cc -o glowny glowny.o funkcje.o $(CFLAGS) $(LDLIBS)

.PHONY : clean
clean :
	$(RM) $(objects) $(programs) *~

all : $(programs)
