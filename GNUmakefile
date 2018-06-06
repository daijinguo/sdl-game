#
# GNUmakefile
# author: patrick.dai
# date  : 2018/06/02
#


# define the project directories
PROJECT_DIR = $(shell pwd)

# define the config
CONFIG    = debug
BUILD_DIR = $(PROJECT_DIR)/build

# base command
RM      = rm -rf
AR      = ar
ARFLAGS = cr
RANLIB  = ranlib
MKDIR   = mkdir -p
CC      = gcc
CXX     = g++

CXXSRCS := $(shell find $(PROJECT_DIR) -name "*.cpp" -type f 2> /dev/null)
CXXOBJS := $(CXXSRCS:$(PROJECT_DIR)/%.cpp=$(BUILD_DIR)/objs/$(CONFIG)/%.o)

objects := $(CXXOBJS)


target     = sdlBookGameDemo

all    : $(target)
rebuild: clean all

#vpath %.cpp  $(SRC_PATH)

INCLUDES := -I$(PROJECT_DIR)/third/tinyxml

ifeq ($(CONFIG), debug)
    CXXFLAGS := -std=c++14 -c -g -ggdb -fmessage-length=0 -DNDEBUG -fPIC
else ifeq ($(CONFIG), release)
    CXXFLAGS := -std=c++14 -c -g2 -fmessage-length=0 -fPIC
else 
    CXXFLAGS := -std=c++14 -c
endif


$(objects):$(BUILD_DIR)/objs/$(CONFIG)/%.o:$(PROJECT_DIR)/%.cpp
	@dir=`dirname $@`;\
	if [ ! -d $$dir ]; then\
		$(MKDIR) $$dir; \
	fi
	$(CXX) $(CXXFLAGS) $(INCLUDES) $< -o $@



$(target): $(objects)
	$(CXX) -o $@ $(objects) -lSDL2 -lSDL2_image -lSDL2_mixer -lz


libtinyxml.a: $(CXXOBJS_TINYXML)
	$(AR) $(ARFLAGS) $@ $^
	$(RANLIB) $@



clean:
	@$(RM) $(BUILD_DIR)
	@find . -name "*.o" -type f | xargs $(RM)
	@$(RM) $(target)
