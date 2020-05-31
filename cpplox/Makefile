all: run

run: build
	./lox

build: main.cpp *.h
	g++ -o lox main.cpp

clean:
	rm lox
