DIRS = Emf01 Emf02 Emf03 Emf04 Emf05 Emf06 Emf07 Emf08 EmfView MetaFile

all:
	for d in $(DIRS); do \
		$(MAKE) -C $$d; \
	done

clean:
	for d in $(DIRS); do \
		$(MAKE) -C $$d clean; \
	done
