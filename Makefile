raylib_flags=-lraylib -lGL -lm -lpthread -ldl -lrt -lX11

install:
	g++ src/main/Main.cpp src/units/Unit.cpp src/camera/GameCamera.cpp src/keyBindings/KeyBindings.cpp src/map/Map.cpp src/map/Cell.cpp src/screens/MainScreen.cpp ${raylib_flags} -o output/strategy

clean:
	rm -f output/strategy

play:
	output/strategy