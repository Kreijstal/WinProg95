SUBDIRS = AllColor Bounce2 Dibble Fader Grays1 Grays2 Grays3 Pipes \
          ShowDib3 ShowDib4 ShowDib5 ShowDib6 ShowDib7 ShowDib8 \
          SysPal1 SysPal2 SysPal3 Tunnel

all:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir all; \
	done

clean:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir clean; \
	done
