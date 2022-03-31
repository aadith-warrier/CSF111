gcc -c pointertranspose.c
gcc -c transpose.c
gcc -c main.c
gcc -o transposethis_exe pointertranspose.o transpose.o main.o
./transposethis_exe
rm *.o
rm *exe