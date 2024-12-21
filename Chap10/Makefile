# Top-level Makefile for Chapter 10

SUBDIRS = IconDemo MenuDemo NoPopups PoePoem PoorMenu PopMenu PopPad2

.PHONY: all clean $(SUBDIRS)

all: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@

clean:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir clean; \
	done
