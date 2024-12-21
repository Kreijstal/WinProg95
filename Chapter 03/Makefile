SUBDIRS = "0301 HelloWin"

all: subdirs

subdirs:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C "$$dir" || exit 1; \
	done

clean:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C "$$dir" clean; \
	done
