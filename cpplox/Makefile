all: run

run: build
	./lox

file: build
	./lox input

mem-run: build
	valgrind ./lox

build: *.cpp *.h
	g++ -o lox *.cpp

clean:
	rm lox
