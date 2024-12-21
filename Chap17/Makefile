# Individual project Makefiles are now in their respective directories
.PHONY: all clean

SUBDIRS = ChosFont EndJoin EZTest FontClip FontFill FontOut1 FontOut2 FontRot \
          Justify1 Justify2 PickFont UniChars

all:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir; \
	done

clean:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir clean; \
	done
