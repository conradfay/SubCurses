PROJNAME=subcurses
CC=g++
CFLAGS=-Isrc
LDFLAGS=-Isrc
LIBS=
BUILDDIR=build
SRCDIR=src
SRCFILES=$(wildcard $(SRCDIR)/*.cpp)
OBJFILES=$(patsubst $(SRCDIR)/%.cpp, $(BUILDDIR)/%.o, $(SRCFILES))

All: $(PROJNAME)

$(PROJNAME):
	$(CC) $(LDFLAGS) $(SRCFILES) -o $@

#$(PROJNAME): $(OBJFILES)
#	$(CC) $(LDFLAGS) $^ -o $@

#$(OBJFILES): $(SRCFILES)
#	$(CC) $(CFLAGS) $< -o $@
