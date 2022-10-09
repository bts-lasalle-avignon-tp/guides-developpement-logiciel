MAKE = make

SUBDIRS = guide-doxygen guide-jira guide-redaction guide-rendu-document-2btssnir guide-git guide-programmation guide-rendu-document-1btssn guide-outils

all:
	list='$(SUBDIRS)'; for subdir in $$list; do \
	echo "Make in $$subdir"; \
	(cd $$subdir && $(MAKE) $@) \
	done;

clean:
	list='$(SUBDIRS)'; for subdir in $$list; do \
	echo "Clean in $$subdir"; \
	(cd $$subdir && $(MAKE) $@) \
	done;

rebuild:
	list='$(SUBDIRS)'; for subdir in $$list; do \
	echo "Rebuild in $$subdir"; \
	(cd $$subdir && $(MAKE) $@) \
	done;
