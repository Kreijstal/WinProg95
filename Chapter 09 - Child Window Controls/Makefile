SUBDIRS = BtnLook Colors1 Environ Head OwnDraw PopPad1

.PHONY: all clean $(SUBDIRS)

all: $(SUBDIRS)

clean:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir clean; \
	done

$(SUBDIRS):
	$(MAKE) -C $@
