dirtest: directory.c
	gcc directory.c -o dirtest

run: dirtest
	./dirtest

clean:
	rm dirtest
	rm *.exe
	rm *~
	rm *dump	
