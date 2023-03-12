VPATH=src
DISTFOLDER=dist
SRCFOLDER=src
CFLAGS=-g -std=c18

main: main.o linkedlist_insert.o linkedlist_ops.o
	gcc $(CFLAGS) $(DISTFOLDER)/main.o $(DISTFOLDER)/linkedlist_insert.o $(DISTFOLDER)/linkedlist_ops.o -o $(DISTFOLDER)/main

main.o: main.c linkedlist.h linkedlist_insert.o linkedlist_ops.o
	gcc $(CFLAGS) -c $(SRCFOLDER)/main.c -o $(DISTFOLDER)/main.o

linkedlist_insert.o: linkedlist_insert.c linkedlist_insert.h linkedlist.h
	gcc $(CFLAGS) -c $(SRCFOLDER)/linkedlist_insert.c -o $(DISTFOLDER)/linkedlist_insert.o

linkedlist_ops.o: linkedlist_ops.c linkedlist_ops.h linkedlist.h
	gcc $(CFLAGS) -c $(SRCFOLDER)/linkedlist_ops.c -o $(DISTFOLDER)/linkedlist_ops.o

clean: 
	$(RM) $(DISTFOLDER)/*.o

distclean:
	$(RM) $(DISTFOLDER)/*