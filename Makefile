build:
	cc -std=c99 -Wall main.c -o lisp

run: build
	./lisp
