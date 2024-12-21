
SUBDIRS = Apollo11 DibConv DibHeads DibSect SeqDisp ShowDib1 ShowDib2

all:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir; \
	done

clean:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir clean; \
	done
