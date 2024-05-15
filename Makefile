build:
	cc -std=c99 -Wall  main.c -ledit -o lisp

run: build
	./lisp
