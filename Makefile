# Top-level Makefile for Windows Programming Examples
SUBDIRS = Chap04 Chap05 Chap06 Chap07 Chap08 Chap10 Chap11 Chap12 \
          Chap13 Chap14 Chap15 Chap16 Chap17 Chap18 Chap19 Chap20 \
          Chap21 Chap22 Chap23 \
          Chapter\ 01 Chapter\ 02 Chapter\ 03 \
          Chapter\ 09\ -\ Child\ Window\ Controls

.PHONY: all clean $(SUBDIRS)

all: $(SUBDIRS)

$(SUBDIRS):
	@echo "Building $@..."
	@cd "$@" && $(MAKE)

clean:
	@for dir in $(SUBDIRS); do \
		echo "Cleaning $$dir..."; \
		(cd "$$dir" && $(MAKE) clean); \
	done
