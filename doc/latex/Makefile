#############
# commmands #
#############
LATEX	:= latexmk
REMOVE	:= rm -f


#########
# paths #
#########
FILES_SRC :=  $(wildcard tex/*/*)


###########
# recipes #
###########
run:
	$(LATEX) -pvc


main.pdf: $(FILES_SRC)
	$(LATEX)


clean:
	$(LATEX) -c
	$(REMOVE) main.run.xml  main.sh

cleanAll:
	$(LATEX) -c
	$(REMOVE) main.pdf main.bbl  main.ptc  main.run.xml
