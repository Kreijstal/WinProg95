# Makefile for Chap13 projects

# List of project directories
SUBDIRS = DevCaps2 FormFeed PopPad4 Print1 Print2 Print3

# Default target to build all projects
all:
	@for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir; \
	done

# Clean target to clean all projects
clean:
	@for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir clean; \
	done

.PHONY: all clean $(SUBDIRS)
