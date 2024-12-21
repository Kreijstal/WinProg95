DIRS = BitBlt BitMask Blowup Bounce1 Bricks1 Bricks2 Bricks3 GrafMenu HelloBit Scramble Sketch Stretch

all:
	for d in $(DIRS); do \
		$(MAKE) -C $$d; \
	done

clean:
	for d in $(DIRS); do \
		$(MAKE) -C $$d clean; \
	done
