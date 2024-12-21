SUBDIRS = Beeper1 Beeper2 Clock DigClock WhatClr

.PHONY: all clean $(SUBDIRS)

all: $(SUBDIRS)

clean:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir clean; \
	done

$(SUBDIRS):
	$(MAKE) -C $@
