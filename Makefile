# Commands
CXX := g++
RM := rm -f
MKDIR := mkdir -p
CP := cp -f

# Paths
INCLUDE_PATHS := -Iinclude
OBJDIR := build
OBJ := $(OBJDIR)/algdemo
SRC := $(wildcard src/*.cc)

# Compiler flags
CXXFLAGS := -std=c++14 -w -pedantic-errors -O0 -g
LDFLAGS :=

# Targets
.PHONY: all clean algdemo

all: algdemo

algdemo: $(OBJ)

$(OBJ): $(SRC)
	$(CXX) $(SRC) $(INCLUDE_PATHS) $(CXXFLAGS) $(LDFLAGS) -o $(OBJ)

$(SRC): | $(OBJDIR)

$(OBJDIR):
	$(MKDIR) $(OBJDIR)

clean:
	$(RM) $(OBJ)
