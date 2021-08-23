PDF := $(patsubst %.adoc,%.pdf,$(wildcard *.adoc))
HTML := $(patsubst %.adoc,%.html,$(wildcard *.adoc))

HTMLOPTIONS=-b html5 -a data-uri
PDFOPTIONS=

all : $(TARGETDIR) $(HTML) $(PDF)
	
%.html: %.adoc
	asciidoctor $< $(HTMLOPTIONS) -o $@

%.pdf: %.adoc
	asciidoctor-pdf $< $(PDFOPTIONS) -o $@

.PHONY: clean

clean:
	rm -f *.html *.pdf

rebuild: clean all
