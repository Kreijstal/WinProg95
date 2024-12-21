DIRS = 0101\ HelloMsg

all: ${DIRS}

${DIRS}: FORCE
	$(MAKE) -C $@

clean:
	for dir in ${DIRS}; do $(MAKE) -C $$dir clean; done

FORCE:
