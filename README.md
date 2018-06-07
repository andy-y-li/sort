## Sort

### Usage

```
 $ ./configure 
checking for a BSD-compatible install... /usr/bin/install -c
checking whether build environment is sane... yes
checking for a thread-safe mkdir -p... ./install-sh -c -d
checking for gawk... no
checking for mawk... no
checking for nawk... no
checking for awk... awk
checking whether make sets $(MAKE)... yes
checking for gcc... gcc
checking whether the C compiler works... yes
checking for C compiler default output file name... a.out
checking for suffix of executables... 
checking whether we are cross compiling... no
checking for suffix of object files... o
checking whether we are using the GNU C compiler... yes
checking whether gcc accepts -g... yes
checking for gcc option to accept ISO C89... none needed
checking for style of include used by make... GNU
checking dependency style of gcc... gcc3
checking that generated files are newer than configure... done
configure: creating ./config.status
config.status: creating Makefile
config.status: creating config.h
config.status: executing depfiles commands
$  make
/Applications/Xcode.app/Contents/Developer/usr/bin/make  all-am
gcc -DHAVE_CONFIG_H -I. -I ./src    -g -O2 -Wall  -MT bubbleSort.o -MD -MP -MF .deps/bubbleSort.Tpo -c -o bubbleSort.o `test -f 'src/bubbleSort.c' || echo './'`src/bubbleSort.c
mv -f .deps/bubbleSort.Tpo .deps/bubbleSort.Po
gcc  -g -O2 -Wall    -o bubble bubbleSort.o  
gcc -DHAVE_CONFIG_H -I. -I ./src    -g -O2 -Wall  -MT cocktailSort.o -MD -MP -MF .deps/cocktailSort.Tpo -c -o cocktailSort.o `test -f 'src/cocktailSort.c' || echo './'`src/cocktailSort.c
mv -f .deps/cocktailSort.Tpo .deps/cocktailSort.Po
gcc  -g -O2 -Wall    -o cocktail cocktailSort.o  
gcc -DHAVE_CONFIG_H -I. -I ./src    -g -O2 -Wall  -MT selectionSort.o -MD -MP -MF .deps/selectionSort.Tpo -c -o selectionSort.o `test -f 'src/selectionSort.c' || echo './'`src/selectionSort.c
mv -f .deps/selectionSort.Tpo .deps/selectionSort.Po
gcc -DHAVE_CONFIG_H -I. -I ./src    -g -O2 -Wall  -MT create_rand.o -MD -MP -MF .deps/create_rand.Tpo -c -o create_rand.o `test -f 'src/create_rand.c' || echo './'`src/create_rand.c
mv -f .deps/create_rand.Tpo .deps/create_rand.Po
gcc  -g -O2 -Wall    -o selectionSort selectionSort.o create_rand.o  
gcc -DHAVE_CONFIG_H -I. -I ./src    -g -O2 -Wall  -MT insertionSort.o -MD -MP -MF .deps/insertionSort.Tpo -c -o insertionSort.o `test -f 'src/insertionSort.c' || echo './'`src/insertionSort.c
mv -f .deps/insertionSort.Tpo .deps/insertionSort.Po
gcc  -g -O2 -Wall    -o insertionSort insertionSort.o create_rand.o  
gcc -DHAVE_CONFIG_H -I. -I ./src    -g -O2 -Wall  -MT insertionSortDichotomy.o -MD -MP -MF .deps/insertionSortDichotomy.Tpo -c -o insertionSortDichotomy.o `test -f 'src/insertionSortDichotomy.c' || echo './'`src/insertionSortDichotomy.c
mv -f .deps/insertionSortDichotomy.Tpo .deps/insertionSortDichotomy.Po
gcc  -g -O2 -Wall    -o insertionSortDichotomy insertionSortDichotomy.o create_rand.o
$  ./insertionSort
20 33 10 82 70 37 18 48 57 12 
插入排序结果：10 12 18 20 33 37 48 57 70 82 

```



