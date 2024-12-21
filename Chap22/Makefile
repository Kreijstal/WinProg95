SUBDIRS = AddSynth BachTocc Drum KBMidi Record1 Record2 Record3 SineWaveGen TextMCI WakeUp

.PHONY: all clean $(SUBDIRS)

all: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@

clean:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir clean; \
	done
