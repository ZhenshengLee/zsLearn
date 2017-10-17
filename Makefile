PROJECT := zs_pat_basic

# define c++ version
CXX_VERSION := -std=c++11

# define files and directories
CXX_SRCS := ./src/*.cpp
HEADER_FILES := ./include/*.h
LIB_FILES :=
SRC_DIR := ./src
INCLUDE_DIR := ./include
BUILD_DIR := ./bin
LINK_DIR :=


# define debug options
DEBUG_OPTIONS := -g

# define build targets
.PHONY : all
all: $(BUILD_DIR)/hello_world \

		 
		 
$(BUILD_DIR)/% : $(SRC_DIR)/%.cpp
	$(CXX) $(CXX_VERSION) -o $@ $(DEBUG_OPTIONS) -I$(INCLUDE_DIR) -L$(LINK_DIR) -l$(LIB_FILES) $<

.PHONY : clean 
clean : 
	rm -rf $(BUILD_DIR)/*
