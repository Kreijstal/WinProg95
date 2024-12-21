SUBDIRS = KeyView1 KeyView2 StokFont SysMets4 Typer

all: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@

clean:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir clean; \
	done

.PHONY: all clean $(SUBDIRS)
