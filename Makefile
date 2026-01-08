CXX = g++
CXXFLAGS = -Wall -Wextra -g
LIBS = -lpthread -lm -ldl

amp: main.cpp audio_engine.cpp audio_engine.h
	$(CXX) $(CXXFLAGS) -o amp main.cpp audio_engine.cpp $(LIBS)

clean:
	rm -f amp
