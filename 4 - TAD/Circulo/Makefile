# alvo: pre-requisitos
	# comando	

CFLAGS=-O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow
LIBS=-lm
EXECUTAVEL=Circulo

all: $(EXECUTAVEL)

$(EXECUTAVEL): main.o Ponto.o Circulo.o
	gcc main.o Ponto.o Circulo.o $(LIBS) -o $(EXECUTAVEL)

main.o: main.c
	gcc $(CFLAGS) -c main.c

Ponto.o: Ponto.c
	gcc $(CFLAGS) -c Ponto.c

Circulo.o: Circulo.c
	gcc $(CFLAGS) -c Circulo.c

clean: 
	rm -rf *.o $(EXECUTAVEL)


run: $(EXECUTAVEL)
	./$(EXECUTAVEL)