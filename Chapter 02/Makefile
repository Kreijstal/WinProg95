DIRS = "0201 ScrnSize"

all: ${DIRS}

${DIRS}: FORCE
	cd "$@" && $(MAKE)

clean:
	for %%I in (${DIRS}) do cd %%I && $(MAKE) clean

FORCE:
