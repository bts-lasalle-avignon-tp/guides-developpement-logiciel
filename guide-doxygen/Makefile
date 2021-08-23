TARGETDIR_PDF = ../guides-pdf
TARGETDIR_HTML = ../guides-html
PDF := $(patsubst %.adoc,%.pdf,$(wildcard *.adoc))
HTML := $(patsubst %.adoc,%.html,$(wildcard *.adoc))
HTMLOPTIONS=-b html5 -a data-uri
PDFOPTIONS=-r asciidoctor-mathematical -a source-highlighter=pygments -a pygments-style=xcode

$(info Fabrication des guides PDF : $(PDF))
$(info Fabrication des guides HTML : $(HTML))

#all : $(TARGETDIR) $(HTML)
#all : $(TARGETDIR) $(PDF)
all : $(TARGETDIR) $(HTML) $(PDF)

%.html: %.adoc
	asciidoctor $< $(HTMLOPTIONS) -o $(TARGETDIR_HTML)/$@

%.pdf: %.adoc
	asciidoctor-pdf $< $(PDFOPTIONS) -o $(TARGETDIR_PDF)/$@

$(TARGETDIR_PDF):
	mkdir $(TARGETDIR_PDF)

$(TARGETDIR_HTML):
	mkdir $(TARGETDIR_HTML)

.PHONY: clean

clean:
	rm -f *.html *.pdf

rebuild: clean all
