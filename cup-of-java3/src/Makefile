JC = javac
TARGETS = $(patsubst %.java,%.class, $(wildcard *.java))

all: $(TARGETS)

%.class: %.java
	@echo "** Compiling Java" 
	$(JC) $(INCFLAGS) $<

clean:
	@rm -f *.class *~
