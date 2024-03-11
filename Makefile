raylib_flags=-lraylib -lGL -lm -lpthread -ldl -lrt -lX11

install:
	g++ src/main/Main.cpp src/units/Unit.cpp src/camera/GameCamera.cpp src/keyBindings/KeyBindings.cpp ${raylib_flags} -o output/strategy

clean:
	rm -f output/strategy

play:
	output/strategy