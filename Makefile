PROJNAME=subcurses
CC=g++
CFLAGS=-Isrc
LDFLAGS=-Isrc -std=c++11 -g
LIBS=
BUILDDIR=build
SRCDIR=src
SRCFILES=$(wildcard $(SRCDIR)/*.cpp)
OBJFILES=$(patsubst $(SRCDIR)/%.cpp, $(BUILDDIR)/%.o, $(SRCFILES))

All: $(PROJNAME)

$(PROJNAME): clean
	$(CC) $(LDFLAGS) $(SRCFILES) -o $@

clean:
	rm -f $(PROJNAME)

#$(PROJNAME): $(OBJFILES)
#	$(CC) $(LDFLAGS) $^ -o $@

#$(OBJFILES): $(SRCFILES)
#	$(CC) $(CFLAGS) $< -o $@
