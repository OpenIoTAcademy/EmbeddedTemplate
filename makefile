#
# The root makefile
#

OUTPUT_PATH=out
OUTPUT_NAME=test

# Path that includes all makefiles
MAKE_FILES_PATH = Environment/BuildSystem

#
# Detailed Compiling output
#
ifndef V
SILENCE = -s
else
SILENCE =
endif

# The cross compile if exists, otherwise uses the gcc
CROSS_COMPILE?=

#
# Source (.c) Files
#
SOURCE_FILES= \
	Source/Test/test.c

#
# Header (.h) File Directories
#
#  Bear in mind, include directories must have -I prefix
#
INCLUDE_DIRECTORIES= \
	-IInclude/

#
# Project Definitions
#
#  Bear in mind, definitions must have -D prefix
#
DEFINES= \
	-DTEST_CONFIG=255

#
# All Flags
#
CFLAGS=${INCLUDE_DIRECTORIES} ${DEFINES}


#############################################
# Rules
#############################################

.PHONY: all rebuild test clean out run unittest check_all

# Rebuild
rebuild: clean all

#
# The main rule
#
all: test

# The test rule
test: out
	${CROSS_COMPILE}gcc -g ${SOURCE_FILES} ${CFLAGS} -o ${OUTPUT_PATH}/${OUTPUT_NAME}

# The clean rule
clean:
	rm -rf ${OUTPUT_PATH}

# The rule to create out path
out:
	mkdir -p ${OUTPUT_PATH}

# The rule to run the output executable
run:
	./${OUTPUT_PATH}/${OUTPUT_NAME}

unittest:
	make -f $(MAKE_FILES_PATH)/execute_unittest.mk TEST_MODULE=$(TEST_MODULE) $(SILENCE)

#
# Builds and Runs all system validation objects.
#
check_all: clean all
	make -f $(MAKE_FILES_PATH)/execute_systemcheck.mk $(SILENCE)