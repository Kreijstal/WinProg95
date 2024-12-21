SUBDIRS = AltWind Bezier Clover DevCaps1 LineDemo RandRect SineWave WhatSize

all: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@

clean:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir clean; \
	done

.PHONY: all clean $(SUBDIRS)
