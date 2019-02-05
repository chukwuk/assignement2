

CC=g++
EXE_F=gofishgame


all: $(EXE_F)

$(EXE_F):game.cpp hand.cpp implemen.cpp deck.cpp player.cpp card.cpp game.hpp hand.hpp player.hpp deck.hpp implemen.hpp card.hpp gofish.cpp
	$(CC) game.cpp hand.cpp implemen.cpp deck.cpp player.cpp card.cpp gofish.cpp -o $(EXE_F)
 

#gofish.o: game.hpp game.cpp hand.cpp hand.hpp player.cpp player.hpp deck.hpp deck.cpp card.cpp card.hpp implemen.cpp implemen.hpp 
#	$(CC)  game.cpp hand.cpp implemen.cpp deck.cpp player.cpp card.cpp -o gofish.o


clean:
	rm -f *.o $(EXE_FILE)
