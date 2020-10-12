all: ni-regex.cpp
	g++ -O3 -o ni-regex ni-regex.cpp
clean:
	$(RM) ni-regex
