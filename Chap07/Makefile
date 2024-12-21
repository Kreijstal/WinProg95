DIRS = Checker1 Checker2 Checker3 Checker4 Connect Blokout1 Blokout2 Sysmets5 

all:
	for d in $(DIRS); do \
		$(MAKE) -C $$d; \
	done

clean:
	for d in $(DIRS); do \
		rm -f $$d/*.exe $$d/*.o; \
	done
