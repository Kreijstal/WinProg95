DIRS = About1 About2 About3 Colors2 Colors3 HexCalc PopPad3

all:
	for d in $(DIRS); do \
		(cd $$d && $(MAKE)); \
	done

clean:
	for d in $(DIRS); do \
		(cd $$d && $(MAKE) clean); \
	done
