FLAGS = -pedantic-errors -std=c++11



main.o : main.cpp player.h titlescreen.h acidville.h alkacity.h chemistria.h metalmetropolis.h clearscreen.h ending.h
	g++ $(FLAGS) -c $< 

player.o : player.cpp player.h  
	g++ $(FLAGS) -c $<

titlescreen.o : titlescreen.cpp titlescreen.h beginning.h clearscreen.h
	g++ $(FLAGS) -c $<

beginning.o : beginning.cpp beginning.h player.h clearscreen.h titlescreen.h
	g++ $(FLAGS) -c $<

acidville.o : acidville.cpp acidville.h player.h clearscreen.h acid.h save.h
	g++ $(FLAGS) -c $<

alkacity.o : alkacity.cpp alkacity.h alkacity.h clearscreen.h alkaline.h save.h player.h
	g++ $(FLAGS) -c $<

metalmetropolis.o : metalmetropolis.cpp metalmetropolis.h clearscreen.h player.h metal.h save.h
	g++ $(FLAGS) -c $<

chemistria.o : chemistria.cpp chemistria.h player.h clearscreen.h creator.h save.h
	g++ $(FLAGS) -c $<

acid.o : acid.cpp acid.h acidville.h clearscreen.h player.h
	g++ $(FLAGS) -c $<

alkaline.o : alkaline.cpp alkaline.h clearscreen.h alkacity.h player.h
	g++ $(FLAGS) -c $<

metal.o : metal.cpp metal.h clearscreen.h metalmetropolis.h player.h
	g++ $(FLAGS) -c $<	

creator.o : creator.cpp creator.h chemistria.h clearscreen.h player.h
	g++ $(FLAGS) -c $<

clearscreen.o : clearscreen.cpp clearscreen.h
	g++ $(FLAGS) -c $<

ending.o : ending.cpp ending.h clearscreen.h player.h
	g++ $(FLAGS) -c $<

save.o : save.cpp save.h player.h
	g++ $(FLAGS) -c $<

load.o : load.cpp load.h player.h
	g++ $(FLAGS) -c $<

main : acid.o acidville.o alkacity.o alkaline.o beginning.o chemistria.o clearscreen.o creator.o ending.o load.o main.o metal.o metalmetropolis.o player.o save.o titlescreen.o
	g++ $(FLAGS) $^ -o $@

clean:
	rm -f  acid.o acidville.o alkacity.o alkaline.o beginning.o chemistria.o clearscreen.o creator.o ending.o load.o main.o metal.o metalmetropolis.o player.o save.o titlescreen.o main.tgz

.PHONY: clean
