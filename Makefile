Booster.o: Booster.cpp functions.h
	g++ -c -pedantic-errors -std=c++11 $<

CompDirection.o: CompDirection.cpp functions.h
	g++ -c -pedantic-errors -std=c++11 $<

GamePlay.o: GamePlay.cpp functions.h
	g++ -c -pedantic-errors -std=c++11 $<

OnTarget.o: OnTarget.cpp functions.h
	g++ -c -pedantic-errors -std=c++11 $<

PrintAll.o: PrintAll.cpp functions.h
	g++ -c -pedantic-errors -std=c++11 $<

SaveLoad.o: SaveLoad.cpp functions.h
	g++ -c -pedantic-errors -std=c++11 $<

Score.o: Score.cpp functions.h
	g++ -c -pedantic-errors -std=c++11 $<

ScorePastKeeper.o: ScorePastKeeper.cpp functions.h
	g++ -c -pedantic-errors -std=c++11 $<

Search.o: Search.cpp functions.h
	g++ -c -pedantic-errors -std=c++11 $<

SwapPlayers.o: SwapPlayers.cpp functions.h
	g++ -c -pedantic-errors -std=c++11 $<

main.o: main.cpp functions.h
	g++ -c -pedantic-errors -std=c++11 $<

main: Booster.o CompDirection.o GamePlay.o OnTarget.o PrintAll.o SaveLoad.o Score.o ScorePastKeeper.o Search.o SwapPlayers.o main.o
	g++ -pedantic-errors -std=c++11 $^ -o main

claen:
	rm -f main *.o

.PHONY: clean
