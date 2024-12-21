DIRS = 0201\ ScrnSize

all: ${DIRS}

${DIRS}: FORCE
	$(MAKE) -C $@

clean:
	for dir in ${DIRS}; do $(MAKE) -C $$dir clean; done

FORCE:
