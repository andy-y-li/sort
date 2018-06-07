bin_PROGRAMS = bubble cocktail selectionSort insertionSort insertionSortDichotomy
bubble_SOURCES = src/bubbleSort.c
cocktail_SOURCES = src/cocktailSort.c
selectionSort_SOURCES = src/selectionSort.c \
						src/create_rand.h src/create_rand.c

insertionSort_SOURCES = src/insertionSort.c \
						src/create_rand.h src/create_rand.c

insertionSortDichotomy_SOURCES = src/insertionSortDichotomy.c \
						src/create_rand.h src/create_rand.c

INCLUDES = -I $(top_srcdir)/src

CFLAGS = -g -O2 -Wall 

EXTRA_DIST = autogen.sh \
			 README.md
